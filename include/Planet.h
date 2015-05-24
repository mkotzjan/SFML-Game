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
    size_t size;
    sf::Vector2f velocity;
    // Constructor
    Planet();
};

#endif // PLANET_H_
