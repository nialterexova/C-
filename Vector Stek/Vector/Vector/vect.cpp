#include "stdafx.h"
#include "vect.h"

template <typename T>
vect<T>::vect()
{
	maxSize = 5;
	size = 0;
	stack = new T[maxSize];
}

template <typename T>
vect<T>::vect(int max)
{
	maxSize = max;
	size = 0;
	stack = new T[maxSize];
}

template <typename T>
vect<T>::vect(int max, int value)
{
	maxSize = max;
	stack = new T[maxSize];
	for (int i = 0; i < maxSize; i++) {
		stack[i] = value;
	}
	size = maxSize;
}

template <typename T>
vect<T>::~vect()
{
	delete[] stack;
}

template <typename T>
bool vect<T>::push(const T val)
{
	if (size == maxSize) {
		maxSize *= 2;
		T * temp = new T[maxSize];
		for (int i = 0; i < size; i++) {
			temp[i] = stack[i];
		}
		swap(stack, temp); 
		delete[] temp;
	}
		
	stack[size] = val; 
	size++;
	return true; // успешное выполнение операции
}

template <typename T>
int vect<T>::pop()
{
	if (isEmpty() == true) {
		cout << "Error ";
		return 0; // ошибка
	}

	size--;
	int x = stack[size];

	if ((maxSize / 2 == size) && (size != 0)) {
		maxSize /= 2;
		T * temp = new T[maxSize];
		for (int i = 0; i < size; i++) {
			temp[i] = stack[i];
		}
		swap(stack, temp);
		delete[] temp;
	}
	return x; // успешное выполнение операции
}

template <typename T>
bool vect<T>::isEmpty()
{
	if (size <= 0)
		return true;
	else 
		return false;
}

template<class T>
int & vect<T>::operator[](int index)
{
	return stack[index];
}

template class vect<int>;