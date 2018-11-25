#include "stdafx.h"
#include "Child.h"


Child::Child()
{
	force = 1 + rand() % 5;
	happiness = 50;
}


Child::~Child()
{
}


int Child::ChangeHappiness(int Happy)
{
	happiness += Happy;
	cout << happiness << endl;
	return 0;
}
