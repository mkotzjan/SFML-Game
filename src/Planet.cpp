// Planet.cpp
// Author: Michael Kotzjan

#include "Planet.h"

// _____________________________________________________________________________
Planet::Planet() : size(5), velocity(sf::Vector2f(0.0f, 0.0f))
{
  setFillColor(sf::Color::Blue);
  setRadius(size);
}

// _____________________________________________________________________________
void Planet::setPos(sf::Vector2f pos)
{
  position = pos;
  setPosition(position);
}

// _____________________________________________________________________________
void Planet::setMass(double m)
{
  mass = m;
  size = mass * 2;
  setRadius(size);
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
  setPosition(position);
}
// _____________________________________________________________________________
void Planet::draw(sf::RenderWindow& window)
{
  sf::CircleShape planet((float)size);
  planet.setPosition(position);
  planet.setFillColor(sf::Color::Blue);
  window.draw(planet);
}
