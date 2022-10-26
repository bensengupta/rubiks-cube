#include "raylib.h"

#ifndef CUBE_H
#define CUBE_H

class Cube
{
public:
  Cube();
  ~Cube();

  enum class Color
  {
    White,
    Green,
    Blue,
    Orange,
    Red,
    Yellow,
  };

  enum class Side
  {
    Up = 0,
    Down = 1,
    Front = 2,
    Back = 3,
    Left = 4,
    Right = 5,
  };

private:
  Color faces[6][3][3] = {
      {
          {Color::Orange, Color::Orange, Color::Orange},
          {Color::Orange, Color::Orange, Color::Orange},
          {Color::Orange, Color::Orange, Color::Orange},
      },
      {
          {Color::Red, Color::Red, Color::Red},
          {Color::Red, Color::Red, Color::Red},
          {Color::Red, Color::Red, Color::Red},
      },
      {
          {Color::White, Color::White, Color::White},
          {Color::White, Color::White, Color::White},
          {Color::White, Color::White, Color::White},
      },
      {
          {Color::Yellow, Color::Yellow, Color::Yellow},
          {Color::Yellow, Color::Yellow, Color::Yellow},
          {Color::Yellow, Color::Yellow, Color::Yellow},
      },
      {
          {Color::Green, Color::Green, Color::Green},
          {Color::Green, Color::Green, Color::Green},
          {Color::Green, Color::Green, Color::Green},
      },
      {
          {Color::Blue, Color::Blue, Color::Blue},
          {Color::Blue, Color::Blue, Color::Blue},
          {Color::Blue, Color::Blue, Color::Blue},
      },
  };
};

#endif // CUBE_H
