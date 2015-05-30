// Star.cpp
// Author: Michael Kotzjan

#include "Star.h"

// ______________________________________________________________________________
Star::Star() : size(mass * 2)
{

}

// ______________________________________________________________________________
void Star::draw(sf::RenderWindow& window)
{
  sf::CircleShape star((float)size);
  star.setPosition(position);
  star.setFillColor(sf::Color::Yellow);
  window.draw(star);
}
