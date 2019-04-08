/* Вариант 12
1.	Описать структуру с именем NOTE, 
содержащую следующие поля :
•	фамилия, имя;
•	номер телефона;
•	день рождения(массив из трех чисел).
2.	Написать программу реализующую список(в виде класса) 
структур, выполняющую следующие действия :
•	ввод с клавиатуры данных в массив, 
состоящий из восьми элементов типа NOTE; 
записи должны быть упорядочены по датам дней рождения;
•	вывод па экран информации о человеке, 
номер телефона которого введен с клавиатуры;
•	если такого нет, выдать на дисплей 
соответствующее сообщение.
*/

#include "Header.h"
#include "massiv.h"


int main()
{
	
	massiv list; //создаем список
	
	int k = 1;
	while (k != 0) {
		cout << endl;
		cout << "1 - print list; 2 - delete element; " << endl;
		cout << "3 - insert elements; 4 - find number; 0 - exit. " << endl;
		cin >> k;
		switch (k)
		{
		case 1: { //печать списка
			list.Print();
			break;
		}
		case 2: { //удалить элемент по позиции введенной с клавиатуры
			int j;
			cout << "Enter position "; cin >> j;
			list.Del(j);
			break;
		}
		case 3: { //вставить любое количество элементов
			cout << "How much elements?" << endl;
			int n;
			cin >> n;
			NOTE ex;
			for (int i = 0; i < n; i++) {
				cout << i + 1 << ". " << endl;
				cout << "name: "; cin >> ex.name;
				cout << "phone: "; cin >> ex.phone;
				cout << "year: "; cin >> ex.date[2];
				cout << "month: "; cin >> ex.date[1];
				cout << "day: "; cin >> ex.date[0];
				list.Insert(ex);
			}
			break;
		}
		case 4: { // найти человека по номеру телефона
			string s; 
			cout << "Enter number: "; cin >> s;
			if (list.findNumber(s) == false) cout << "not found" << endl;
			break;
		}
		case 0: { // выйти из программы
			k = 0;
			break;
		}
		default:
			break;
		}

	}
	
}

