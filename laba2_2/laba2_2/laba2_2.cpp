//12. Класс − одномерный массив.
//Дополнительно перегрузить следующие операции :
//-− вычитание массивов; == !=
//[] − доступ по индексу;


//Порядок выполнения работы.
//1. Создать шаблон заданного класса.
//Определить конструкторы, деструктор, перегруженную операцию присваивания(“ = ”) и операции, заданные в варианте задания.
//2. Написать программу тестирования, в которой проверяется использование шаблона для стандартных типов данных.
//3. Выполнить тестирование.
//4. Определить пользовательский класс, который будет использоваться в качестве параметра шаблона.
//Определить в классе необходимые функции и перегруженные операции.
//5. Написать программу тестирования, в которой проверяется использование шаблона для пользовательского типа.
//6. Выполнить тестирование.


#include "Header.h"
#include "complex.h"
#include "massiv.h"


//template <class T> class List {
//public:
//	struct node {
//		T d;
//		node* next;
//	};
//	node* headOflist, * endOfList;
//	int iterat;
//	List() { headOflist = 0; endOfList = 0; iterat = 0; }
//	void Add(T d) {
//		node* temp = new node;
//		temp->d = d;
//		temp->next = headOflist;
//		headOflist = temp;
//		iterat++;
//	}
//	List& operator+(T& x) {
//		node* temp = new node;
//		temp->d = x;
//		temp->next = headOflist;
//		headOflist = temp;
//		iterat++;
//		return *this;
//	}
//	List& operator--() {
//		node* temp = headOflist;
//		headOflist = headOflist->next;
//		delete temp;
//		iterat--;
//		return *this;
//	}
//	List& operator!=(List& a) {
//		node* temp = headOflist;
//		node* temp1 = a.headOflist;
//		bool flag = true;
//		if (iterat != a.iterat) {
//			cout << "размерности не равны => ";
//		}
//		else {
//			while (temp) {
//				if (temp->d != temp1->d) {
//					flag = false;
//					break;
//				}
//				temp = temp->next;
//				temp1 = temp1->next;
//			}
//		}
//		if (flag) {
//			cout << "списки одинаковые\n";
//		}
//		else {
//			cout << "списки не одинаковые\n";
//		}
//		return *this;
//	}
//	void Show() {
//		node* temp = headOflist;
//		while (temp != 0) {
//			cout << temp->d << " ";
//			temp = temp->next;
//		}
//		cout << "\n";
//	}
//	~List() {
//		node* temp;
//		while (headOflist != 0) {
//			temp = headOflist->next;
//			delete headOflist;
//			headOflist = temp;
//		}
//	}
//};
//template <> class List <Complex> {
//public:
//	struct node {
//		Complex d;
//		node* next;
//	};
//	node* headOflist, * endOfList;
//	int iterat;
//	List() { headOflist = 0; endOfList = 0; iterat = 0; }
//	void Add(Complex d) {
//		node* temp = new node;
//		temp->d = d;
//		temp->next = headOflist;
//		headOflist = temp;
//		iterat++;
//	}
//	List& operator+(Complex& x) {
//		node* temp = new node;
//		temp->d = x;
//		temp->next = headOflist;
//		headOflist = temp;
//		iterat++;
//		return *this;
//	}
//	List& operator--() {
//		node* temp = headOflist;
//		headOflist = headOflist->next;
//		delete temp;
//		iterat--;
//		return *this;
//	}
//	List& operator!=(List& a) {
//		node* temp = headOflist;
//		node* temp1 = a.headOflist;
//		bool flag = true;
//		if (iterat != a.iterat) {
//			cout << "размерности не равны => ";
//			flag = false;
//		}
//		else {
//			while (temp) {
//				if ((temp->d.re != temp1->d.re) || (temp->d.im != temp1->d.im)) {
//					flag = false;
//					break;
//				}
//				temp = temp->next;
//				temp1 = temp1->next;
//			}
//		}
//		if (flag) {
//			cout << "списки одинаковые\n";
//		}
//		else {
//			cout << "списки не одинаковые\n";
//		}
//		return *this;
//	}
//	void Show() {
//		node* temp = headOflist;
//		while (temp != 0) {
//			temp->d.printElement();
//			temp = temp->next;
//		}
//	}
//	~List() {
//		node* temp;
//		while (headOflist != 0) {
//			temp = headOflist->next;
//			delete headOflist;
//			headOflist = temp;
//		}
//	}
//};
//
int main() {
	complex x1(3, 4);
	complex x2(3, 2);
	complex x3(3, 2);
	x1.print();
	massiv <int> arr1;
	arr1.Add(5);
	arr1.Add(6);
	massiv <int> arr2;
	arr2.Add(5);
	arr2.Add(6);
	arr1 == arr2;
	massiv <complex> pr1;
	pr1.Add(x1);
	pr1.Add(x2);
	massiv <complex> pr2;
	pr2.Add(x1);
	pr2.Add(x3);
	pr1 == pr2;
	
	
//	List <int> L;
//	List <int> L1;
//	List <double> D;
//	List <double> D1;
//	List <string> S;
//	List <string> S1;
//	List <bool> B;
//	List <bool> B1;
//	List <Complex> C;
//	List <Complex> C1;
//	for (int i = 1; i < 7; i++) {
//		L.Add(i * i * i);
//		L1.Add(i * i * i);
//		D.Add(i * 0.5);
//		D1.Add(i * 0.5);
//		S.Add("+++");
//		S1.Add("+++");
//		B.Add(false);
//		B1.Add(true);
//	}
//	Complex c1(5, 6);
//	Complex c2(5, 7);
//	C.Add(c1);
//	C.Add(c2);
//	C1.Add(c2);
//	C1.Add(c1);
//	cout << "\t\tМетоды работающие с Integer\n";
//	int x = 5;
//	L.Show();
//	L1.Show();
//	L != L1;
//	L + x;
//	L.Show();
//	L != L1;
//	--L;
//	L.Show();
//	cout << "\t\tМетоды работающие сo String\n";
//	string a = "sf";
//	S.Show();
//	S != S1;
//	S + a;
//	S != S1;
//	--S;
//	S.Show();
//	cout << "\t\tМетоды работающие с Complex\n";
//	C.Show();
//	cout << endl;
//	C + c2;
//	C.Show();
//	cout << endl;
//	--C;
//	C.Show();
//	cout << endl;
//	C != C1;
//
//	D.Show();
//	B.Show();
	return 0;
}
