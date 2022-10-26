#include "raylib.h"

#ifndef CUBE_H
#define CUBE_H

enum class CubeColor
{
  white,
  green,
  blue,
  orange,
  red,
  yellow,
};

enum class CubeSide
{
  up = 0,
  down = 1,
  front = 2,
  back = 3,
  left = 4,
  right = 5,
};

class Cube
{
public:
  Cube();
  ~Cube();

private:
  CubeColor faces[6][3][3] = {
      {
          {CubeColor::orange, CubeColor::orange, CubeColor::orange},
          {CubeColor::orange, CubeColor::orange, CubeColor::orange},
          {CubeColor::orange, CubeColor::orange, CubeColor::orange},
      },
      {
          {CubeColor::red, CubeColor::red, CubeColor::red},
          {CubeColor::red, CubeColor::red, CubeColor::red},
          {CubeColor::red, CubeColor::red, CubeColor::red},
      },
      {
          {CubeColor::white, CubeColor::white, CubeColor::white},
          {CubeColor::white, CubeColor::white, CubeColor::white},
          {CubeColor::white, CubeColor::white, CubeColor::white},
      },
      {
          {CubeColor::yellow, CubeColor::yellow, CubeColor::yellow},
          {CubeColor::yellow, CubeColor::yellow, CubeColor::yellow},
          {CubeColor::yellow, CubeColor::yellow, CubeColor::yellow},
      },
      {
          {CubeColor::green, CubeColor::green, CubeColor::green},
          {CubeColor::green, CubeColor::green, CubeColor::green},
          {CubeColor::green, CubeColor::green, CubeColor::green},
      },
      {
          {CubeColor::blue, CubeColor::blue, CubeColor::blue},
          {CubeColor::blue, CubeColor::blue, CubeColor::blue},
          {CubeColor::blue, CubeColor::blue, CubeColor::blue},
      },
  };
};

#endif // CUBE_H
