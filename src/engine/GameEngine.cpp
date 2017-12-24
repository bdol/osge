//
// Created by Brian Dolhansky on 12/22/17.
//

#include "GameEngine.h"

#include <iostream>
#include <thread>

using namespace std::this_thread;
using namespace std::chrono;

GameEngine::GameEngine() {
    bool quit = false;

    int c = 0;
    while (!quit) {

        std::cout << "Tick " << c << std::endl;

        if (c > 100) {
            quit = true;
        }

        sleep_until(system_clock::now() + seconds(1));
        c++;

    }

}