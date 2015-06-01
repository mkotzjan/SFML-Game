// Planet.h
// Author: Michael Kotzjan

#ifndef PLANET_H_
#define PLANET_H_

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include "Object.h"

// A Planet
class Planet : Object
{
  public:
    double size;
    sf::Vector2f velocity;
    // Constructor
    Planet(sf::Vector2f pos, double mass);
    // Draw the planet:
    void draw(sf::RenderWindow& window);
};

#endif // PLANET_H_
