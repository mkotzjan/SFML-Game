// Object.cpp
// Author: Michael Kotzjan

#include "Object.h"

// _____________________________________________________________________________
Object::Object() : position(sf::Vector2f(100.0, 100.0)), mass(10.0)
{
}

// _____________________________________________________________________________
void Object::setPos(sf::Vector2f pos)
{
  position = pos;
}

// _____________________________________________________________________________
void Object::setMass(double m)
{
  mass = m;
}
