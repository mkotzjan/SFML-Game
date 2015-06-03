// Object.h
// Author: Michael Kotzjan, Christian Wansart

#ifndef OBJECT_H_
#define OBJECT_H_

#include <SFML/System/Vector2.hpp>

// An Object
class Object
{
  protected:
    sf::Vector2f position;
    double mass;
  public:
    // Constructor
    Object();

    // Set position
    virtual void setPos(sf::Vector2f pos);
    
    // Set mass
    virtual void setMass(double m);
};

#endif // OBJECT_H_
