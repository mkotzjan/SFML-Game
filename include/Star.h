// Star.h
// Author: Michael Kotzjan

#ifndef STAR_H_
#define STAR_H_

#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include "Object.h"
#include "Planet.h"

// A Star
class Star : public Object
{
  public:
    double size;
    std::vector<Planet> planetList;

    // Constructor
    Star();
    // Set the mass;
    void setMass(double m);
    // Update the star and the planets
    void update();
    // Draw the star
    void draw(sf::RenderWindow& window);
    // Add a planet to the star
    void addPlanet(Planet p);
};

#endif // STAR_H_
