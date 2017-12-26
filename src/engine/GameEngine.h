//
// Created by Brian Dolhansky on 12/22/17.
//

#ifndef OSGE_GAMEENGINE_H
#define OSGE_GAMEENGINE_H

#include <render/RenderEngine.h>


class GameEngine {
public:
    GameEngine();
    ~GameEngine();

    void start();

private:
    bool quit;
    RenderEngine renderEngine;
};


#endif //OSGE_GAMEENGINE_H
