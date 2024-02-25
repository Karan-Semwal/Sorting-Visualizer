#include "Visualizer.h"

int main()
{
    // data for sortign and visualizing
    std::vector<int> data = { 2, 5, 4, 1, 6, 8, 9, 3 };

    Visualizer vis;
    vis.start(data, SORT::BUBBLE_SORT);
}