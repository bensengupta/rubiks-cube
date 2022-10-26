#include "game.hpp"

int main()
{
  Game game;
  game.Initialize();
  game.RunLoop();
  game.Shutdown();

  return 0;
}
