// Vector.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "vect.h"
#include <iostream>
using namespace std;

int main()
{
	vect <int> Arr(3, 1);
	Arr.print();
	Arr.push(5);
	cout << Arr[3] << endl;
	Arr.print();
	cout << Arr.pop() << endl;
	cout << Arr.pop() << endl;
	cout << Arr.pop() << endl;
	cout << Arr.pop() << endl;
	cout << Arr.pop() << endl;
	system("pause");
    return 0;
}
