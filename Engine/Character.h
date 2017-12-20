#pragma once

#include "Vec2.h"
#include "Graphics.h"

class Character
{

public:

	void Draw( int x, int y, Graphics& gfx );
	void Update();

private:

	void Movement(  );
	void Collision();

private:

	Vec2 pos;

};