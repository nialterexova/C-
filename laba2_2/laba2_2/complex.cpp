#include "complex.h"
#include "Header.h"


complex::complex(int rea = 0, int ima = 0)
{
	re = rea;
	im = ima;
}


complex::~complex()
{
}


void complex::print() {
	if (im != 0) {
		cout << re << " + i * ( " << im << " ) " << endl;
	}
	else {
		cout << re << endl;
	}
}