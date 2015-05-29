// Star.h
// Author: Michael Kotzjan

#ifndef STAR_H_
#define STAR_H_

#include "Object.h"

// A Star
class Star : Object
{
  public:
    double size;
    // Constructor
    Star();
    // Draw the star
    void draw();
};

#endif // STAR_H_
