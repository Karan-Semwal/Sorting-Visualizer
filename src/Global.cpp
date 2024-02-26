#include "Global.h"
#include <iostream>
#include <algorithm>

void print(std::vector<int> &nums)
{
    printf("[ ");
    std::for_each(nums.begin(), nums.end(), [](int element) {
        printf("%d, ", element);
    });
    printf("]\n");
}