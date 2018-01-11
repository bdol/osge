//
// Created by bdol on 12/26/17.
//

#include "RenderEngine.h"
#include <iostream>

RenderEngine::RenderEngine() {
    if (surface.init() != 0) {
        std::cerr << "Error initializing rendering subsystem. Exiting." << std::endl;
        exit(1);
    }
}

int RenderEngine::render() {
    return surface.render();
}

RenderEngine::~RenderEngine() {

}
