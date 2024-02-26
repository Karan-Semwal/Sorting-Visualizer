#include <SFML/Graphics/RectangleShape.hpp>

#include "Sort.h"
#include <algorithm>
#include <vector>
#include <iostream>

void Sort::init(const std::vector<int>& data)
{
    size_t dataSize = data.size(); 
    int maxValue = *std::max_element(data.begin(), data.end());

    // caluclate bar width to adjust according to window width and data size
    while (BAR_HEIGHT_SCALER * maxValue >= WINDOW_HEIGHT - BAR_PADDING && BAR_HEIGHT_SCALER > 2) {
        BAR_HEIGHT_SCALER -= 0.5;
    }

    // caluclate bar width to adjust according to window width and data size
    BAR_WIDTH_SCALER = (WINDOW_WIDTH - (dataSize + 1) * BAR_PADDING) / dataSize;
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
        mBar->setPosition(sf::Vector2f(mBar->getPosition().x + BAR_WIDTH_SCALER + BAR_PADDING, mBar->getPosition().y ));
        mBar->setRotation(180.f);
        mBar.draw(window);
    });
    window.display();
}