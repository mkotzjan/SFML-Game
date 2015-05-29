// Planet.h
// Author: Michael Kotzjan

#ifndef PLANET_H_
#define PLANET_H_

#include "Object.h"
#include <SFML/System/Vector2.hpp>

// A Planet
class Planet : Object
{
  public:
    double size;
    sf::Vector2f velocity;
    // Constructor
    Planet();
    // Draw the planet:
    void draw();
};

#endif // PLANET_H_
