#include "Visualizer.h"
#include "Sort.h"
#include "Global.h"

int main()
{
    // data for sortign and visualizing
    std::vector<int> data = { 
        7, 5, 4, 11, 6, 8, 9, 3, 
        5, 4, 3, 12, 9, 8, 6, 5, 
        4, 3, 3, 8, 7, 4, 1, 15
    };
    
    

    std::vector<int> nums = { 3, 2, 4, 1 };

    print(data);
    Visualizer visualizer;
    visualizer.start(data, SORT::INSERTION_SORT);
    print(data);
    
}