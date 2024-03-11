#include "Visualizer.h"
#include "../Config.hpp"

int main()
{
    std::vector data = data_to_be_sorted;
    Visualizer visualizer;
    visualizer.start(data, algorithm_for_sorting);
}
