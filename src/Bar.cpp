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
    mShape->setSize({ BAR_WIDTH_SCALER, BAR_HEIGHT_SCALER });
    mShape->setPosition({ POS_X, POS_Y });
}

void Bar::draw(sf::RenderWindow& window)
{
    window.draw(*mShape);
}

void Bar::resetBarSize()
{
    mShape->setSize({ BAR_WIDTH_SCALER, BAR_HEIGHT_SCALER });
}