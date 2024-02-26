#include <SFML/Graphics/RectangleShape.hpp>

#include "Sort.h"
#include <algorithm>

void Sort::init()
{
    mBar.init();
}

void Sort::operator()(sf::RenderWindow& window, std::vector<int>& data, SORT sort_algorithm)
{
    switch (sort_algorithm)
    {
    case SORT::BUBBLE_SORT:
        this->bubble_sort(window, data);
        break;
    
    case SORT::SELECTION_SORT:
        this->selection_sort(window, data);
        break;
        
    case SORT::INSERTION_SORT:
        this->insertion_sort(window, data);
        break;
    
    default:
        printf("No algorithm selected!\n");
        break;
    }
}

void Sort::drawData(const std::vector<int>& data, sf::RenderWindow& window)
{
    mBar.init();
    window.clear();
    std::for_each(data.begin(), data.end(), [&](int element) {
        mBar.resetBarSize();
        mBar->setSize(sf::Vector2f(mBar->getSize().x, mBar->getSize().y * element));
        mBar->setPosition(sf::Vector2f(mBar->getPosition().x + BAR_WIDTH + BAR_PADDING, mBar->getPosition().y ));
        mBar->setRotation(180.f);
        mBar.draw(window);
    });
    window.display();
}