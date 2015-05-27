// Game.h
// Author: Michael Kotzjan

#ifndef GAME_H_
#define GAME_H_

#include <SFML/Graphics.hpp>

// The instance of a game
class Game
{
  // The window
  sf::RenderWindow window;
  
  // Handles player input
  void processEvents();
  // Updates the game
  void update();
  // Renders the game
  void render();

  public:
    // Constructor
    Game();
    // Runs the game
    void run();
};

#endif // GAME_H_
