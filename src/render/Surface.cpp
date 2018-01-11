//
// Created by bdol on 12/26/17.
//

#include "Surface.h"

#include <iostream>
#include <render/common/shader.hpp>



Surface::Surface() {}

int Surface::init() {
    if(!glfwInit()) {
        std::cerr << "Failed to initialize GLFW\n" << std::endl;
        return 1;
    }

    glfwWindowHint(GLFW_SAMPLES, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    this->window = glfwCreateWindow( 1024, 768, "Main", NULL, NULL);
    if (this->window == NULL){
        std::cerr << "Failed to open GLFW window." << std::endl;
        glfwTerminate();
        return 1;
    }
    glfwMakeContextCurrent(this->window);
    glewExperimental=true;

    if (glewInit() != GLEW_OK) {
        std::cerr << "Failed to initialize GLEW" << std::endl;
        return 1;
    }

    glfwSetInputMode(this->window, GLFW_STICKY_KEYS, GL_TRUE);

    glClearColor(0.0, 0.2, 0.0, 0.0);

    GLuint vertexArrayId;
    glGenVertexArrays(1, &vertexArrayId);
    glBindVertexArray(vertexArrayId);

    programId = LoadShaders("../src/render/common/SimpleVertexShader.vertexshader",
                                   "../src/render/common/SimpleFragmentShader.fragmentshader");

    glGenBuffers(1, &vertexBuffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
    glBufferData(GL_ARRAY_BUFFER, testTriangle.vertexBufferSize(), testTriangle.vertexBufferData(), GL_STATIC_DRAW);

    return 0;
}

int Surface::render() {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE ) == GLFW_PRESS ||
        glfwWindowShouldClose(window) != 0) {
        this->escapeCallback();
    }

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glUseProgram(programId);

    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
    glVertexAttribPointer(
            0,                  // attribute 0. No particular reason for 0, but must match the layout in the shader.
            3,                  // size
            GL_FLOAT,           // type
            GL_FALSE,           // normalized?
            0,                  // stride
            (void*)0            // array buffer offset
    );

    glDrawArrays(GL_TRIANGLES, 0, 3);
    glDisableVertexAttribArray(0);

    glfwSwapBuffers(this->window);
    glfwPollEvents();
}

void Surface::registerGLEscapeCallback(std::function<void()> callback) {
    this->escapeCallback = callback;
}

