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

    int render();

private:
    Surface surface;

};


#endif //OSGE_RENDERENGINE_H
