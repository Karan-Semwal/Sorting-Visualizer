#include <SFML/Window/VideoMode.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Window/Event.hpp>

#include <stdio.h>
#include "Visualizer.h"
#include "Global.h"

Visualizer::Visualizer()
    : mWindow(new sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), "Sorting Visualizer", sf::Style::Default))
{
}

Visualizer::~Visualizer()
{
    delete mWindow;
}

void Visualizer::start(std::vector<int>& data, SORT sort_algorithm)
{
    int hasFinished = false;

    size_t size_of_data = data.size();
    BAR_WIDTH = (WIDTH - (size_of_data + 1) * BAR_PADDING) / size_of_data;
    mSorter.init();

    sf::Event event;
    while (mWindow->isOpen())
    {
        while (mWindow->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                mWindow->close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                mWindow->close();
        }
        
        // visualize the sort
        if (!hasFinished) {
            mSorter(*mWindow, data, sort_algorithm); 
            hasFinished = true;
        }
    }
}