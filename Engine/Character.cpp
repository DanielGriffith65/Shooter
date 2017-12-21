#include "Character.h"
#include "SpriteCodex.h"

void Character::Draw( Graphics& gfx )
{
	Sprite::drawBatman( (int)pos.x, (int)pos.y, gfx );
}

void Character::Update( Keyboard& kbd )
{

	Movement( kbd );
	
}

void Character::Movement(Keyboard & kbd)
{
	if (kbd.KeyIsPressed('W'))
	{
		pos.y -= speed;
	}
	if (kbd.KeyIsPressed('S'))
	{
		pos.y += speed;
	}
	if (kbd.KeyIsPressed('D'))
	{
		pos.x += speed;
	}
	if (kbd.KeyIsPressed('A'))
	{
		pos.x -= speed;
	}
}

void Character::Collision()
{
}
