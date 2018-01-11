//
// Created by bdol on 12/26/17.
//

#ifndef OSGE_SURFACE_H
#define OSGE_SURFACE_H

#include <functional>

//#include <GL/glew.h>
//#include <glfw3.h>
//#include <glm/glm.hpp>

#include <SFML/Graphics.hpp>
//#include <render/primitives/Triangle.h>

class Surface {
public:
    Surface();
    ~Surface();

    int init();
    int render();

    void registerGLEscapeCallback(std::function<void()> callback);

private:
//    GLFWwindow* window;
//    std::function<void()> escapeCallback;
//
//    Triangle testTriangle;
//    GLuint vertexBuffer;
//    GLuint programId;

    sf::RenderWindow* window;

};


#endif //OSGE_SURFACE_H
