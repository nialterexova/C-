using namespace std;

class massiv
{
private:
	T* mas; //указатель на массив
	int size; //размер массива
public:
	massiv(); //конструктор по умолчанию
	massiv(int); //констурктор массива с заданным размером
	~massiv(); //десструктор
	int getSize(); //получить размер
	void sort(); //сортировка
};

