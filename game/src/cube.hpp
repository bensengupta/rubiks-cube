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
    white,
    green,
    blue,
    orange,
    red,
    yellow,
  };

  enum class Side
  {
    up = 0,
    down = 1,
    front = 2,
    back = 3,
    left = 4,
    right = 5,
  };

private:
  Color faces[6][3][3] = {
      {
          {Color::orange, Color::orange, Color::orange},
          {Color::orange, Color::orange, Color::orange},
          {Color::orange, Color::orange, Color::orange},
      },
      {
          {Color::red, Color::red, Color::red},
          {Color::red, Color::red, Color::red},
          {Color::red, Color::red, Color::red},
      },
      {
          {Color::white, Color::white, Color::white},
          {Color::white, Color::white, Color::white},
          {Color::white, Color::white, Color::white},
      },
      {
          {Color::yellow, Color::yellow, Color::yellow},
          {Color::yellow, Color::yellow, Color::yellow},
          {Color::yellow, Color::yellow, Color::yellow},
      },
      {
          {Color::green, Color::green, Color::green},
          {Color::green, Color::green, Color::green},
          {Color::green, Color::green, Color::green},
      },
      {
          {Color::blue, Color::blue, Color::blue},
          {Color::blue, Color::blue, Color::blue},
          {Color::blue, Color::blue, Color::blue},
      },
  };
};

#endif // CUBE_H
