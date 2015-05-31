// Star.cpp
// Author: Michael Kotzjan

#include "Star.h"

// ______________________________________________________________________________
Star::Star(float posX, float posY, double mass)
{
  size = mass * 2;
  position.x = posX;
  position.y = posY;
}

// ______________________________________________________________________________
void Star::draw(sf::RenderWindow& window)
{
  sf::CircleShape star((float)size);
  star.setPosition(position);
  star.setFillColor(sf::Color::Yellow);
  window.draw(star);
}
