#pragma once
template < typename T>
class Que
{
	T*array;
	int size;
	int begin,
		end;
public:
	Que();
	bool enqueue(T _Vaule);//добавить элемент в конец
	int getSize();//получить размер очереди
	T front();//получить элемент из начала
	void dequeue();
	void print() {
		for (int i=0; i < size; i++) {
			cout << array[i] << " ";
		}
	}
	~Que();
};


