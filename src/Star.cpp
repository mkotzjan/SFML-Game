// Star.cpp
// Author: Michael Kotzjan

#include "Star.h"

// ______________________________________________________________________________
Star::Star() : size(5)
{
  setFillColor(sf::Color::Yellow);
  setRadius(size);
}

// ______________________________________________________________________________
void Star::setPos(sf::Vector2f pos)
{
  position = pos;
  setPosition(position);
}

// ______________________________________________________________________________
void Star::setMass(double m)
{
  mass = m;
  size = mass * 2;
  setRadius(size);
}

// ______________________________________________________________________________
void Star::update()
{
  for (Planet p: planetList)
  {
    p.update();
  }
}

// ______________________________________________________________________________
void Star::drawPlanet(sf::RenderWindow& window)
{
  // Draw the planets
  for (Planet p: planetList)
  {
    window.draw(p);
  }
}

// ______________________________________________________________________________
void Star::addPlanet(Planet p)
{
  planetList.push_back(p);
}
