// Game.cpp
// Author: Michael Kotzjan

#include "Game.h"

// _____________________________________________________________________________
Game::Game() : window(sf::VideoMode(640, 480), "SFML-Game"), star(200.0f, 200.0f, 50), planet()
{
  star.addPlanet(planet);
}

// _____________________________________________________________________________
void Game::run()
{
  while (window.isOpen())
  {
    processEvents();
    update();
    render();
  }
}

// _____________________________________________________________________________
void Game::processEvents()
{
  sf::Event event;
  while (window.pollEvent(event))
  {
    if (event.type == sf::Event::Closed)
    {
      window.close();
    }
  }
}

// _____________________________________________________________________________
void Game::update()
{

}

// _____________________________________________________________________________
void Game::render()
{
  window.clear();
  star.draw(window);
  window.display();
}
