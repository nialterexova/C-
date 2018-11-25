#include "stdafx.h"
#include "Que.h"
#include <iostream>
using namespace std;
template < typename T>
Que<T>::Que()
{
	this->size = 0;
	this->begin = 0;
	this->end = 0;
	array = new T;


}
template < typename T>
bool Que<T>::enqueue(T _Vaule) {
	array[size] = _Vaule;
	size++;
	return 0;
}
template < typename T>
int Que<T>::getSize() {
	return size;
}
template < typename T>
T Que<T>::front() {
	return array[begin];
}
template < typename T>
void Que<T>::dequeue() {//проблема тут 
	if (size > 0) {
		T * temp = new T[size - 1];
		for (int i = 0, j = 1; i <= size; i++, j++)
			temp[i] = array[j];

		cout << "temp=";
		for (int i = 0; i < size; i++) {
			cout << temp[i] << " ";
		}
		cout << endl;

		swap(array, temp);

		cout << "a=";
		for (int i = 0; i < size ; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
		cout << "temp=";
		for (int i = 0; i < size ; i++) {
			cout << temp[i] << " ";
		}
		cout << endl;

		delete[] temp;
		size--;
		begin = 0;

	}
}
template < typename T>
Que<T>::~Que()
{
}
template class Que<int>;