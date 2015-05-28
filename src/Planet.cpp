// Planet.cpp
// Author: Michael Kotzjan

#include "Planet.h"

// _____________________________________________________________________________
Planet::Planet() : size(mass * 2)
{
  // Set velocity to a fixed value
  velocity.x = 1;
  velocity.y = 1;
}
