#pragma once
#include <vector>
#include "src/Sort.h"

// Data for sorting and visualizing
inline std::vector<int> data_to_be_sorted = 
{
    7, 5, 14, 11, 6, 18, 9, 27,
    15, 46, 33, 12, 19, 8, 6, 5,
    19, 30, 23, 8, 7, 4, 1, 15,
    10, 20, 5, 18, 17, 4, 13, 5,
    12, 9, 7, 9, 2, 10, 23, 11, 3
};

// Algorithm to use for sorting
inline SORT algorithm_for_sorting = SORT::SELECTION_SORT;