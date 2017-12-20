#pragma once

#include "Vec2.h"
#include "Graphics.h"
#include "Keyboard.h"

class Character
{

public:

	void Draw( Graphics& gfx );
	void Update( Keyboard& kbd );

private:

	void Movement( Keyboard& kbd );
	void Collision();

private:

	Vec2 pos{ 300, 200 };
	float speed = 5.0f;

};