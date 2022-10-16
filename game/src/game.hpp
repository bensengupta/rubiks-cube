#include "raylib.h"

#ifndef GAME_H
#define GAME_H

class Game {
public:
  Game();
  ~Game();
  // initialize the game
  bool Initialize();
  // run the game loop
  void RunLoop();
  // shutdown the game properly
  void Shutdown();

private:
  Vector2 _ballPosition = {0.0f, 0.0f};
  Vector2 _mousePosition = {0.0f, 0.0f};
  // helper functions to run the game loop
  void ProcessInput();
  void UpdateGame();
  void GenerateOutput();
};

#endif // GAME_H
