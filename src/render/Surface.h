//
// Created by bdol on 12/26/17.
//

#ifndef OSGE_SURFACE_H
#define OSGE_SURFACE_H

#include <functional>

#include <GL/glew.h>
#include <glfw3.h>
#include <glm/glm.hpp>

class Surface {
public:
    Surface();

    int init();
    int render();

    void registerGLEscapeCallback(std::function<void()> callback);

private:
    GLFWwindow* window;
    std::function<void()> escapeCallback;

};


#endif //OSGE_SURFACE_H
