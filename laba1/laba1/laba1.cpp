/* 5. Написать программу, осуществляющую сравнение длины трех строк. В
основном файле программы осуществляется ввод пользователем трех строк,
в файле compare.cpp - производится сравнение.Из функции в основную
программу возвращается номер строки(с 1), которая длиннее остальных, и
выводится на экран.Если есть несколько наиболее длинных строк равной
длины, то вывести все их порядковые номера.Сделать шесть вариантов
функции масштабирования : с передачей параметров через указатель, через
ссылку и по значению, в трех вариантах параметры должны быть
константными, в трех - неконстантными.Указать, какие из 6 способов а)
дают корректный результат б) являются в данном случае
предпочтительными с точки зрения безопасности и целостности данных.
*/

#include "stdafx.h"


int main()
{
	string a,b,c;
	int i;

	cout << "Enter a string" << endl;
	cin >>a >> b >> c;
	val(a,b,c);
	valconst(a, b, c);
	point(&a, &b, &c);
	pointconst(&a, &b, &c);
	adress(a, b, c);
	adressconst(a, b, c);
	cout << "END";
	cin >> i;
    return 0;
}

