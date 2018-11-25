#pragma once

class Cat
{
public:
	Cat();
	Cat(int g, int w);
	~Cat();
	int growth;
	int weigth;
	virtual int meow()=0;
};

