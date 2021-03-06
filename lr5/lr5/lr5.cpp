/*Лаб. 5 - Вариант 1
Винни-Пух получил премию и решил рассчитаться с долгами. 
Беда в том, что его друзья, которым он должен денег, живут в разных странах. 
Он обратился в банк «Кристофер Робин и партнеры», 
чтобы перевести рублевый перевод (5000 р) ослику Иа, 
долларовый (100 $) - Сове, и перевод в Евро (200 €) для Пятачка.

Реализовать классы «Счет», «Валюта» (абстрактный), 
«Рубль», «Доллар», «Евро», а также
А) класс «Перевод» (шаблонный). 
Б) класс «Перевод» и 3 класса-потомка для переводов в разных видах валюты. 
Сделать необходимые три перевода со счета Винни-Пуха на счета его друзей, 
используя механизм позднего связывания (виртуальных функций).
*/

#include "stdafx.h"


int main()
{
	account Winnie(568548175, 7000, 500, 400);
	account Ia(123456789, 6050, 100, 5);
	account Owl(987654321, 2005, 0, 562);
	account Pig(111111111, 201, 2, 9);

	orderRUB<account*> WinIa(&Winnie, &Ia, 5000);
	WinIa.orderPrint();
	WinIa.orderDone();
	Winnie.printMoney();
	Ia.printMoney();

	orderUSD<account*> WinOwl(&Winnie, &Owl, 100);
	WinOwl.orderPrint();
	WinOwl.orderDone();
	Winnie.printMoney();
	Owl.printMoney();

	orderEUR<account*> WinPig(&Winnie, &Pig, 200);
	WinPig.orderPrint();
	WinPig.orderDone();
	Winnie.printMoney();
	Pig.printMoney();
	
	system("pause");
    return 0;
}

