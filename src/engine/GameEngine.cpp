//
// Created by Brian Dolhansky on 12/22/17.
//

#include "GameEngine.h"

#include <iostream>
#include <thread>

using namespace std::this_thread;
using namespace std::chrono;

GameEngine::GameEngine() {
    shouldQuit = false;
    renderEngine.surface.registerGLEscapeCallback(std::bind(&GameEngine::quit, this));
}

void GameEngine::start() {
    while (!shouldQuit) {
        frameTimer.start();

        renderEngine.render();

        frameTimer.checkAndWait();
    }

    std::cout << "Goodbye!" << std::endl;
}

void GameEngine::quit() {
    shouldQuit = true;
}

