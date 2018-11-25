#include <iostream>
using namespace std;

template <class T> 
class vect
{
private:
	T *stack; // указатель на стек
	int size; // размер стека
	int maxSize; // максимальный размер
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
	bool push(const T ); // поместить элемент в стек
	int pop(); // удалить элемент из стека 
	bool isEmpty(); // 
	int & operator[](int index);
};

