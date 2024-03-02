#pragma once
#include <vector>
#include "Sort.h"

namespace sf {
    class RenderWindow;
}

class Visualizer {
public:
    Visualizer();
    ~Visualizer();
    Visualizer(const Visualizer&) = delete;

    void start(std::vector<int>& data, SORT sort = SORT::BUBBLE_SORT);

private:
    sf::RenderWindow* mWindow;
    Sort mSorter;
};
