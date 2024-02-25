#pragma once
#include <vector>
#include <memory>

namespace sf {
    class RenderWindow;
    class RectangleShape;
}

enum SORT
{
    BUBBLE_SORT,
    SELECTION_SORT,
    INSERTION_SORT
};

class Visualizer {
public:
    Visualizer();
    ~Visualizer();
    Visualizer(const Visualizer&) = delete;
    
    void init();
    void draw();
    
    void start(std::vector<int>& data, SORT sort = SORT::BUBBLE_SORT);

private:
    std::vector<int> mData{};
    sf::RenderWindow* mWindow;
    sf::RectangleShape* mShape;
};