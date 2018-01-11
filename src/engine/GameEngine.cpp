//
// Created by Brian Dolhansky on 12/22/17.
//

#include "GameEngine.h"

#include <iostream>
#include <thread>

#include <entities/units/BaseUnit.h>
#include <render/primitives/Triangle.h>

using namespace std::this_thread;
using namespace std::chrono;

GameEngine::GameEngine() {
    shouldQuit = false;
}

void GameEngine::start() {
    BaseUnit b1;
    BaseUnit b2;
    BaseUnit b3;

    Triangle jawn;

    std::cout << "B1 id: " << b1.getID() << std::endl;
    std::cout << "B2 id: " << b2.getID() << std::endl;
    std::cout << "B3 id: " << b3.getID() << std::endl;

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

