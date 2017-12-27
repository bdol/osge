//
// Created by Brian Dolhansky on 12/22/17.
//

#include "GameEngine.h"

#include <iostream>
#include <thread>

using namespace std::this_thread;
using namespace std::chrono;

GameEngine::GameEngine() {
    quit = false;
}

void GameEngine::start() {
    while (!quit) {
        frameTimer.start();

        std::cout << "Tick " << std::endl;

        renderEngine.render();

        frameTimer.checkAndWait();

    }
}

GameEngine::~GameEngine() {}