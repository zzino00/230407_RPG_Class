#pragma once
#include "Wall.h"
#include "Floor.h"
class FWorld
{
public:
	FWorld();
	virtual ~FWorld();
	

	FWall GetWall() { return Wall; }
	void SetWall(FWall Value)
	{
			Wall = Value;	
	}

	FFloor GetFloor(){ return Floor; }
	void SetFloor(FFloor Value)
	{
			Floor = Value;
	}
private:
	FWall Wall;
	FFloor Floor;
	

};

