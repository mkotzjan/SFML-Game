// Planet.cpp
// Author: Michael Kotzjan

#include "Planet.h"

class Planet : Object
{
  // _____________________________________________________________________________
  Planet::Planet()
  {
    // Set size of the Planet to a fixed value
    size = 10;
    // Set velocity to a fixed value
    velocity.x = 1;
    velocity.y = 1;
  }
}
