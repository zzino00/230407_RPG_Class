#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "World.h"
#include "Wall.h"
#include "Floor.h"


int main()
{
	FWorld World;
	FPlayer Player;
	FMonster Monster;
	FWall Wall;
	FFloor Fllor;

	World.SetWall(Wall);

	return 0;
}