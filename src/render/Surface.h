//
// Created by bdol on 12/26/17.
//

#ifndef OSGE_SURFACE_H
#define OSGE_SURFACE_H

#include <GL/glew.h>
#include <glfw3.h>
#include <glm/glm.hpp>

class Surface {
public:
    Surface();
    ~Surface();

    int init();
    int render();

private:
    GLFWwindow* window;

};


#endif //OSGE_SURFACE_H
