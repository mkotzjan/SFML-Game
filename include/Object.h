// Object.h
// Author: Michael Kotzjan, Christian Wansart

#ifndef OBJECT_H_
#define OBJECT_H_

#include <SFML/System/Vector2.hpp>

// An Object
class Object
{
  public:
    sf::Vector2f position;
    double mass;
    // Constructor
    Object();
};

#endif // OBJECT_H_
