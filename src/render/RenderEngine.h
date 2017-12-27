//
// Created by bdol on 12/26/17.
//

#ifndef OSGE_RENDERENGINE_H
#define OSGE_RENDERENGINE_H

#include "Surface.h"


class RenderEngine {
public:
    RenderEngine();
    ~RenderEngine();

    void registerEntity();
    void deregisterEntity();

    int render();
    Surface surface;

};


#endif //OSGE_RENDERENGINE_H
