// example.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Que.h"

using namespace std;


int main()
{
	Que<int>a;
	a.enqueue(2);
	a.enqueue(3);
	cout << "a=";
	a.print();
	cout << endl;
	a.dequeue();
	cout << a.getSize();
	system("pause");
    return 0;
}

