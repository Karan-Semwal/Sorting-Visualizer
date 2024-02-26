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
    Sort() = default;
    ~Sort() = default;
    Sort(const Sort&) = default;

    // call operator for Sort 
    void init();
    void operator()(sf::RenderWindow& window, std::vector<int>& data, SORT sort_algorithm);

    void drawData(const std::vector<int>& data, sf::RenderWindow& window);

    // Sorting algorithms
    void bubble_sort(sf::RenderWindow& window, std::vector<int>& data);
    void selection_sort(sf::RenderWindow& window, std::vector<int>& data);
    void insertion_sort(sf::RenderWindow& window, std::vector<int>& data);

private:
    Bar mBar;
};