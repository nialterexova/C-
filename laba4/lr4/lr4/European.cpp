#include "stdafx.h"
#include "European.h"


European::European(int g, int w, string cl) :Cat(g, w)
{
	Color = cl;
}


European::European(const European& that) {
	growth = that.growth;
	weigth = that.weigth;
}

European::~European()
{
}


int European::meow()
{
	cout << "mew" << endl;
	return 0;
}
