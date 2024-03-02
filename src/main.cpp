#include "Visualizer.h"
#include "Sort.h"
#include "Global.h"

int main()
{
    // data for sorting and visualizing
    std::vector<int> data1 = {
        7, 5, 14, 11, 6, 18, 9, 27,
        15, 46, 33, 12, 19, 8, 6, 5,
        19, 30, 23, 8, 7, 4, 1, 15,
        10, 20, 5, 18, 17, 4, 13, 5,
        12, 9, 7, 9, 2, 10, 23, 11, 3
    };

    Visualizer visualizer;
    visualizer.start(data1, SORT::SELECTION_SORT);
}
