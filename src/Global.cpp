#include "Global.h"
#include <iostream>
#include <algorithm>

void print(std::vector<int> &nums)
{
    std::for_each(nums.begin(), nums.end(), [](int element) {
        std::cout << element << " ";
    });
    std::cout << "\n";
}