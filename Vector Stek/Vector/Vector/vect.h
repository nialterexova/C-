#include <iostream>
using namespace std;

template <class T> 
class vect
{
private:
	T *stack; // ��������� �� ����
	int size; // ������ �����
	int maxSize; // ������������ ������
public:
	vect();
	vect(int max);
	vect(int max, int value);
	~vect();
	void print() {
		for(int i=0; i<maxSize; i++){
			cout << stack[i] << " ";
		}
		cout << endl;
	}
	bool push(const T ); // ��������� ������� � ����
	int pop(); // ������� ������� �� ����� 
	bool isEmpty(); // 
	int & operator[](int index);
};

