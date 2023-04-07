#include "Character.h"
#include<iostream>

FCharacter::FCharacter()
{
	std::cout << "캐릭터가 생성되었습니다." << std::endl;
}

FCharacter::~FCharacter()
{
	std::cout << "캐릭터가 삭제되었습니다." << std::endl;


}

void FCharacter::Move()
{
	std::cout << "캐릭터가 이동했습니다" << std::endl;
}
