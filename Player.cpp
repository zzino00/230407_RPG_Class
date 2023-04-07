#include "Player.h"
#include<iostream>

FPlayer::FPlayer()
{
	std::cout << "플레이어가 생성되었습니다." << std::endl;
}

FPlayer::~FPlayer()
{
	std::cout << "플레이어가 삭제되었습니다." << std::endl;
}

void FPlayer::Move()
{
	std::cout << "플레이어가 이동했습니다" << std::endl;
}
