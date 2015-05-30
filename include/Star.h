// Star.h
// Author: Michael Kotzjan

#ifndef STAR_H_
#define STAR_H_

#include <SFML/Graphics.hpp>
#include "Object.h"

// A Star
class Star : Object
{
  public:
    double size;
    // Constructor
    Star();
    // Draw the star
    void draw(sf::RenderWindow& window);
};

#endif // STAR_H_
