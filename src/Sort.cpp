#include "Sort.h"
#include <SFML/Graphics/RectangleShape.hpp>

Sort::Sort()
{
    mBar.init();
}

void Sort::bubble_sort(sf::RenderWindow& window, std::vector<int>& data)
{
    updateDraw(data, window);    
    displayData(window);
}

void Sort::selection_sort(sf::RenderWindow& window, std::vector<int>& data)
{

}

void Sort::insertion_sort(sf::RenderWindow& window, std::vector<int>& data)
{

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

void Sort::updateDraw(const std::vector<int>& data, sf::RenderWindow& window)
{
    std::for_each(data.begin(), data.end(), [&](int element) {
        printf("%d\n", element);
        mBar.resetBarSize();
        mBar->setSize(sf::Vector2f(mBar->getSize().x, mBar->getSize().y * element * 1));
        mBar->setPosition(sf::Vector2f(mBar->getPosition().x + BAR_WIDTH + BAR_PADDING, mBar->getPosition().y ));
        mBar->setRotation(180.f);
        mBar.draw(window);
    });
}

void Sort::displayData(sf::RenderWindow& window)
{
    window.display();
}