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
	bool enqueue(T _Vaule);//�������� ������� � �����
	int getSize();//�������� ������ �������
	T front();//�������� ������� �� ������
	void dequeue();
	void print() {
		for (int i=0; i < size; i++) {
			cout << array[i] << " ";
		}
	}
	~Que();
};


