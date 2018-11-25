#pragma once
#include "Animal.h"
class Cat :
	public Animal
{
public:
	Cat();
	~Cat();
	int chanceEscape;
	int chanceBite;
	int GetChanceEscape();
	int GetChanceBite();
	int Reaction();
};

