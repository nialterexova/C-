#include "stdafx.h"
#include "footballer.h"


footballer::footballer()
{
	power = 0;
	energy = 0;
}

footballer::footballer(int x, int y)
{
	xy = make_pair(x, y);
	power = 1 + rand() % (100 );
	energy= 1 + rand() % (100 );
}

footballer::~footballer()
{
}

void footballer::Energy5()
{
	energy -= 1;
	if (energy <= 0) {
		play = 0;
		N = 10;
	}
}