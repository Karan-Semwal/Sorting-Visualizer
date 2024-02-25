#include <SFML/Window/VideoMode.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Window/Event.hpp>

#include <stdio.h>
#include "Visualizer.h"

Visualizer::Visualizer()
    : mWindow(new sf::RenderWindow(sf::VideoMode(600, 400), "Sorting Visualizer"))
    , mShape(new sf::RectangleShape({ 40.f, 40.f }))
{
    init();
}

Visualizer::~Visualizer()
{
    delete mWindow;
    delete mShape;
}

void Visualizer::init()
{
    mShape->setFillColor(sf::Color::White);    
}

void Visualizer::start(std::vector<int>& data, SORT sort)
{
    printf("%s\n", "Hello");
    this->draw(); 
}

void Visualizer::draw() 
{
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
        
        mWindow->clear();
        mWindow->draw(*mShape);
        mWindow->display();
    }
}