#pragma once
#include "Cat.h"
class European :
	public Cat
{
	string Color;
public:
	European(int g, int w, string cl);
	European(const European& that);
	~European();
	int meow() override;
	European & operator=(const European& that) {
		growth = that.growth;
		weigth = that.weigth;
		return *this;
	}
};

