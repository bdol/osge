//
// Created by bdol on 12/26/17.
//

#include "FrameTimer.h"

#include <iostream>
#include <thread>

using namespace std::chrono;

FrameTimer::FrameTimer() {
    this->refreshHz = 60;
    updateBudget();
}

FrameTimer::FrameTimer(int refreshHz) {
    this->refreshHz = refreshHz;
    updateBudget();
}


void FrameTimer::start() {
    startTime = high_resolution_clock::now();

}

void FrameTimer::checkAndWait() {
    high_resolution_clock::time_point endTime = high_resolution_clock::now();
    duration<double> diffSeconds = duration_cast<duration<double>>(endTime - startTime);

    int diffMs = (int)(1000 * diffSeconds.count());
    int leftoverBudget = budgetMs - diffMs;

    if (leftoverBudget > 0) {
        std::this_thread::sleep_for(milliseconds(leftoverBudget));
    } else if (leftoverBudget < 0) {
        std::cerr << "Exceeded frame budget by " << -1 * leftoverBudget << " ms." << std::endl;
    }
}

void FrameTimer::updateBudget() {
    budgetMs = (int)(1000.0 * 1.0 / (double)(refreshHz));
}
