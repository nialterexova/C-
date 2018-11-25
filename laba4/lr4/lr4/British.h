#pragma once
#include "Cat.h"
class British :
	public Cat
{
	const string Color = "Blue";
public:
	British(int g, int w);
	~British();
	int meow() override;
};

