#include <vector>
#include <stdio.h>
#include <algorithm>

void insertion_sort(std::vector<int> &data)
{
    for (size_t i = 1; i < data.size(); i++) 
    {
        for (size_t j = i; j > 0 && data.at(j) < data.at(j - 1); j--) // Adjusted loop condition and indexing
        {
            std::swap(data.at(j), data.at(j - 1));
        }
    }
}

int main()
{
    std::vector<int> nums = {3, 2, 4, 1, 7};
    insertion_sort(nums);
    
    std::for_each(nums.begin(), nums.end(), [](int element) {
        printf("%d ", element);
    });
    printf("\n");
}