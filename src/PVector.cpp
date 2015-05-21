// PVector.cpp
// Author: Michael Kotzjan

#include "../include/PVector.h"

// ____________________________________________________________________________
PVector::PVector(double xSet, double ySet)
{
  x = xSet;
  y = ySet;
}

// ____________________________________________________________________________
PVector::Add(PVector v)
{
  x = x + v.x;
  y = y + v.y;
}
