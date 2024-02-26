#pragma once
#include <SFML/Graphics/RenderWindow.hpp>

#include "Global.h"

namespace sf {
    class RectangleShape;
}

class Bar {
public:
    Bar();
    ~Bar();
    Bar(const Bar&) = default;
    
    sf::RectangleShape* operator->() {
        return this->mShape;
    }
    
    void init();
    void resetBarSize();
    void draw(sf::RenderWindow& window);

private:
    sf::RectangleShape* mShape;
};