// Game.cpp
// Author: Michael Kotzjan

#include "Game.h"

// _____________________________________________________________________________
Game::Game() : window(sf::VideoMode(640, 480), "SFML-Game")
{

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

}
