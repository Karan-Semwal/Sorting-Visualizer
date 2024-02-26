#include "Bar.h"
#include <SFML/Graphics/RectangleShape.hpp>

#include "Global.h"

Bar::Bar()
    : mShape(new sf::RectangleShape())
{
}

Bar::~Bar()
{
    delete mShape;
}

void Bar::init()
{
    mShape->setFillColor(sf::Color::White);
    mShape->setSize({ BAR_WIDTH, BAR_HEIGHT });
    mShape->setPosition({ 0 + BAR_PADDING, POS_Y });
}

void Bar::draw(sf::RenderWindow& window)
{
    window.draw(*mShape);
}

void Bar::resetBarSize()
{
    mShape->setSize({ BAR_WIDTH, BAR_HEIGHT });
}