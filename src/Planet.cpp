// Planet.cpp
// Author: Michael Kotzjan

#include "Planet.h"

// _____________________________________________________________________________
Planet::Planet() : size(5), velocity(sf::Vector2f(0.0f, 0.0f))
{
}

// _____________________________________________________________________________
void Planet::setMass(double m)
{
  mass = m;
  size = mass * 2;
}

// _____________________________________________________________________________
void Planet::setVelo(sf::Vector2f velo)
{
  velocity = velo;
}

// _____________________________________________________________________________
void Planet::update()
{
  position += velocity;
}
// _____________________________________________________________________________
void Planet::draw(sf::RenderWindow& window)
{
  sf::CircleShape planet((float)size);
  planet.setPosition(position);
  planet.setFillColor(sf::Color::Blue);
  window.draw(planet);
}
