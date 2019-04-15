#pragma once

#include <SFML/Graphics.hpp>

namespace Zainal
{
    class Collision
    {
    public:
        Collision();
        
        bool CheckSpriteCollision(sf::Sprite sprite1, sf::Sprite sprite2);
        bool CheckSpriteCollision(sf::Sprite sprite1, float scale1, sf::Sprite sprite2, float scale2);
    };
}
