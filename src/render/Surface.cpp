//
// Created by bdol on 12/26/17.
//

#include "Surface.h"

#include <iostream>



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

    return 0;
}

int Surface::render() {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE ) == GLFW_PRESS ||
            glfwWindowShouldClose(window) != 0) {
        this->escapeCallback();
    }

    glfwSwapBuffers(this->window);
    glfwPollEvents();
}

void Surface::registerGLEscapeCallback(std::function<void()> callback) {
    this->escapeCallback = callback;
}

