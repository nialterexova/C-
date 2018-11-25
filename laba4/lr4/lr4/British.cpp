#include "stdafx.h"
#include "British.h"


British::British(int g, int w) :Cat(g, w)
{
}


British::~British()
{
}


int British::meow()
{
	cout << "miaow" << endl;
	return 0;
}
