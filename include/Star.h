// Star.h
// Author: Michael Kotzjan

#ifndef STAR_H_
#define STAR_H_

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include "Object.h"

// A Star
class Star : Object
{
  public:
    double size;
    // Constructor
    Star(float posX, float posY, double mass);
    // Draw the star
    void draw(sf::RenderWindow& window);
};

#endif // STAR_H_
