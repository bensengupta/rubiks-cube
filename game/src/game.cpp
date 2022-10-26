#include "game.hpp"
#include "raylib.h"

Game::Game() {}

Game::~Game() {}


bool Game::Initialize()
{
  SetTargetFPS(60);
  InitWindow(800, 600, "Rubiks Cube");

  return true;
}

void Game::RunLoop()
{
  while (!WindowShouldClose())
  {
    ProcessInput();
    UpdateGame();
    GenerateOutput();
  }
}

void Game::Shutdown() { CloseWindow(); }

void Game::GenerateOutput()
{
  BeginDrawing();

  // clears the screen
  ClearBackground(BLACK);

  DrawCircleV(_ballPosition, 20.0f, BLUE);

  EndDrawing();
}

void Game::ProcessInput() { _mousePosition = GetMousePosition(); }
void Game::UpdateGame() { _ballPosition = _mousePosition; }
