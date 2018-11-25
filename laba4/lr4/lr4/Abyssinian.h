#pragma once
#include "Cat.h"
class Abyssinian :
	public Cat
{
	string Color;
public:
	Abyssinian(int g, int w, string cl);
	~Abyssinian();
	int meow() override;
};

