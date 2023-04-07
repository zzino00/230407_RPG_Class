#pragma once
#include "Character.h"
class FPlayer : FCharacter
{
public:
	FPlayer();
	virtual ~FPlayer();
	void Move() override;
private:
};

