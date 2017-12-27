//
// Created by bdol on 12/26/17.
//

#ifndef OSGE_FRAMETIMER_H
#define OSGE_FRAMETIMER_H

#include <chrono>

class FrameTimer {
public:
    FrameTimer();
    explicit FrameTimer(int refreshHz);

    void start();
    void checkAndWait();

private:
    int refreshHz;
    int budgetMs;

    std::chrono::high_resolution_clock::time_point startTime;

    void updateBudget();

};


#endif //OSGE_FRAMETIMER_H
