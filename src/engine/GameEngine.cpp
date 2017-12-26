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
    int c = 0;
    while (!quit) {

        std::cout << "Tick " << c << std::endl;

        if (c > 100) {
            quit = true;
        }

        renderEngine.render();
        sleep_until(system_clock::now() + seconds(1));
        c++;

    }
}

GameEngine::~GameEngine() {}