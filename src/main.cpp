#include "Visualizer.h"

int main()
{
    // data for sortign and visualizing
    std::vector<int> data = { 
        7, 5, 4, 11, 6, 8, 9, 3, 
        5, 4, 3, 12, 9, 8, 6, 5, 
        4, 3, 3, 8, 7, 4, 10, 15
    };

    Visualizer vis;
    vis.start(data, SORT::BUBBLE_SORT);
}