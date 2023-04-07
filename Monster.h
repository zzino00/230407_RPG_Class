#pragma once
#include "Character.h"
class FMonster : FCharacter
{
public:
	FMonster();
	virtual~FMonster();
	void Move() override;
private:
};

