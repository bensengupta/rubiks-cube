#include "cube.hpp"

Cube::Cube()
{
	int face = static_cast<int>(Cube::Side::Up);
	faces[face][0][0] = Cube::Color::Blue;
}

Cube::~Cube()
{
}