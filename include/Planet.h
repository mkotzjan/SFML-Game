// Planet.h
// Author: Michael Kotzjan

#ifndef PLANET_H_
#define PLANET_H_

#include <stdlib.h>
#include "./Object.h"
#include "./PVector.h"

// A Planet
class Planet : Object
{
  public:
    size_t size;
    PVector velocity;
    // Constructor
    Planet();
};

#endif // PLANET_H_
