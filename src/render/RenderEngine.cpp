//
// Created by bdol on 12/26/17.
//

#include "RenderEngine.h"

RenderEngine::RenderEngine() {
    surface.init();
}

int RenderEngine::render() {
    return surface.render();
}

RenderEngine::~RenderEngine() {

}
