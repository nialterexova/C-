#pragma once
#include "enemy.h"

class witcher
{
public:
	witcher(){};
	~witcher() {};
	int survivability=50;
	int armor=5;
	int damA;
	int damB;
	void fight(monster * monst);
	void oil();
};



