#pragma once
#include <vector>
#include <memory>

namespace sf {
    class RenderWindow;
    class RectangleShape;
}

enum SORT
{
    BUBBLE_SORT = 1, SELECTION_SORT, INSERTION_SORT
};

class Visualizer {
public:
    Visualizer();
    ~Visualizer();
    Visualizer(const Visualizer&) = delete;
    
    void init();
    void resetShapeSize();
    void draw(const std::vector<int>& data);
    void start(std::vector<int>& data, SORT sort = SORT::BUBBLE_SORT);
    

private:
    bool hasFinished = false;
    std::vector<int> mData{};
    sf::RenderWindow* mWindow;
    sf::RectangleShape* mShape;
};