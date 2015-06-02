// Planet.cpp
// Author: Michael Kotzjan

#include "Planet.h"

// _____________________________________________________________________________
Planet::Planet() : size(5)
{
}

// _____________________________________________________________________________
void Planet::setMass(double m)
{
  mass = m;
  size = mass * 2;
}

// _____________________________________________________________________________
void Planet::draw(sf::RenderWindow& window)
{
  sf::CircleShape planet((float)size);
  planet.setPosition(position);
  planet.setFillColor(sf::Color::Blue);
  window.draw(planet);
}
