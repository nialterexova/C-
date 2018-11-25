#include "stdafx.h"
#include "Abyssinian.h"


Abyssinian::Abyssinian(int g, int w, string cl) :Cat(g, w)
{
	Color = cl;
}


Abyssinian::~Abyssinian()
{
}


int Abyssinian::meow()
{
	cout << "meow" << endl;
	return 0;
}
