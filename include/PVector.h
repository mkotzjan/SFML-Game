// PVector.h
// Author: Michael Kotzjan

#ifndef PVECTOR_H_
#define PVECTOR_H_

#include <stdlib.h>

// An euclidean vector (geometric vector)
class PVector
{
  double x;
  double y;

  public:
    // Constructor
    PVector(double xSet, double ySet);

    // Add a vector
    void add(PVector v);
};

#endif // PVECTOR_H_
