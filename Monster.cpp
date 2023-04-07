#include "Monster.h"
#include<iostream>

FMonster::FMonster()
{
	std::cout << "몬스터가 생성되었습니다." << std::endl;
}

FMonster::~FMonster()
{
	std::cout << "몬스터가 삭제되었습니다." << std::endl;
}

void FMonster::Move()
{
	std::cout << "몬스터가 이동했습니다" << std::endl;
}
