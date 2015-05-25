// TestMain
// ChaosBelcebub, 2015

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Planet.h"
#include "Star.h"
#include "Space.h"

int main()
{
  sf::RenderWindow window(sf::VideoMode(500, 500), "SFML-Game");
  
  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        window.close();
      }
    }

    window.clear();
    window.display();
  }

  return 0;
}
