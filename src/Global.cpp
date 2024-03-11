#include "Global.h"
#include <iostream>
#include <algorithm>

#include "Timer.h"

void print(std::vector<int> &nums)
{
    printf("[ ");
    std::for_each(nums.begin(), nums.end(), [](int element) {
        printf("%d, ", element);
    });
    printf("]\n");
}

void Wait_For_Seconds(float delayTime)
{
    static Timer timer(0.f);
    timer.start();

    timer.reset();
    while (timer.getElapsedTime() < delayTime) {
        timer.update();
    }
}
