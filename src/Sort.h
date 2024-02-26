#pragma once
#include <SFML/Graphics/RenderWindow.hpp>

#include <vector>
#include "Bar.h"

enum SORT
{
    BUBBLE_SORT = 1, SELECTION_SORT, INSERTION_SORT
};

class Sort {
public:
    Sort();
    ~Sort() = default;
    Sort(const Sort&) = default;

    // call operator for Sort 
    void operator()(sf::RenderWindow& window, std::vector<int>& data, SORT sort_algorithm);
    
    void updateDraw(const std::vector<int>& data, sf::RenderWindow& window);
    void displayData(sf::RenderWindow& window);

    void bubble_sort(sf::RenderWindow& window, std::vector<int>& data);
    void selection_sort(sf::RenderWindow& window, std::vector<int>& data);
    void insertion_sort(sf::RenderWindow& window, std::vector<int>& data);

private:
    Bar mBar;
};