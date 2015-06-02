// Planet.cpp
// Author: Michael Kotzjan

#include "Planet.h"

// _____________________________________________________________________________
Planet::Planet()
{
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
