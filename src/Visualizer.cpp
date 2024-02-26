#include <SFML/Window/VideoMode.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Window/Event.hpp>

#include <stdio.h>
#include "Visualizer.h"

static constexpr short WIDTH  = 800;
static constexpr short HEIGHT = 600;

static short BAR_WIDTH = 30;
static constexpr short BAR_HEIGHT = 30;
static constexpr short BAR_PADDING = 5;

static constexpr float POS_X = 100.f;
static constexpr float POS_Y = HEIGHT - BAR_PADDING;

Visualizer::Visualizer()
    : mWindow(new sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), "Sorting Visualizer"))
    , mShape(new sf::RectangleShape())
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
    mShape->setSize({ BAR_WIDTH, BAR_HEIGHT });
    mShape->setPosition({ 0 + BAR_PADDING, POS_Y });
}

void Visualizer::start(std::vector<int>& data, SORT sort)
{
    size_t size_of_data = data.size();
    BAR_WIDTH = (WIDTH - size_of_data * BAR_PADDING) / size_of_data ;

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
        
        this->draw(data);
    }
}

void Visualizer::resetShapeSize()
{
    mShape->setSize({ BAR_WIDTH, BAR_HEIGHT });
}

void Visualizer::draw(const std::vector<int>& data)
{
    if (!hasFinished) {
        std::for_each(data.begin(), data.end(), [&](int element) {
            printf("%d\n", element);
            resetShapeSize();
            mShape->setSize(sf::Vector2f(mShape->getSize().x, mShape->getSize().y * element * 1));
            mShape->setPosition(sf::Vector2f(mShape->getPosition().x + BAR_WIDTH + BAR_PADDING, mShape->getPosition().y ));
            mShape->setRotation(180.f);
            mWindow->draw(*mShape);
        });
        mWindow->display();
        hasFinished = true;
    }
}