﻿/* Вариант 12
1.	Описать структуру с именем NOTE, содержащую следующие поля :
•	фамилия, имя;
•	номер телефона;
•	день рождения(массив из трех чисел).
2.	Написать программу реализующую список(в виде класса) структур, выполняющую следующие действия :
•	ввод с клавиатуры данных в массив, состоящий из восьми элементов типа
NOTE; записи должны быть упорядочены по датам дней рождения;
•	вывод па экран информации о человеке, номер телефона которого введен с клавиатуры;
•	если такого нет, выдать на дисплей соответствующее сообщение.

*/

#include "Header.h"
#include "massiv.h"


struct Note
{
	string name;
	string surname;
	int number;
	int date[3];
};


int main()
{
	
	/*const int N = 3;
	Note notes[N];
	for (int i = 0; i < N; i++) {
		cout << "Enter note:" << endl;
		cin >> notes[i].name;
		cin >> notes[i].surname;
		cin >> notes[i].number;
		for (int k = 0; k < 3; k++) {
			cin >> notes[i].date[k];
		}
	}*/

    std::cout << "Hello World!\n"; 
}
