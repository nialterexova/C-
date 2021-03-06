/* 1. «О кошках»
Спроектировать абстрактный класс Кошка и его потомков Британская голубая, 
Абиссинская, Европейская короткошерстная.
У Британской голубой есть константное поле цвет - голубой. 
У остальных классов оно - не константное.
Также должны быть поля рост и вес.
Написать параметризованный конструктор, инициализирующий все поля.
У каждого класса - потомка должен быть по - своему реализован метод «Мяукать».
Создать массив из 10 кошек разных типов, в цикле вызывать метод «Мяукать».
Написать собственный конструктор копирования и 
оператор присваивания для класса «Европейская короткошерстная», 
которые копируют все поля, кроме цвета.
*/

#include "stdafx.h"
#include "Header.h"

string randColor() {
	int color; //1-black, 2-white, 3-grey, 4-red
	color = 1 + rand() % 4;
	switch (color)
	{
		case 1: return "black";
		case 2: return "white";
		case 3: return "grey";
		case 4: return "red";
	default:
		return "rainbow";
	}
}

int main()
{
	srand(time(0));

	British Br(30, 5);
	Abyssinian Ab(28, 4, "black");
	European Eu(20, 3, "gray");
	int type; //1-british, 2-abyssinian, 3-european

	vector<Cat*> Cats;
	for (int i = 0; i < 10; i++) {
		type = 1 + rand() % 3;
		if (type == 1)
			Cats.push_back(new British(28 + rand() % (35 - 28 + 1), 4 + rand() % (7 - 4 + 1)));
		if (type == 2)
			Cats.push_back(new Abyssinian(26 + rand() % (32 - 26 + 1), 4 + rand() % (6 - 4 + 1), randColor()));
		if (type == 3)
			Cats.push_back(new European(18 + rand() % (25 - 18 + 1), 3 + rand() % (6 - 3 + 1), randColor()));
	}
	for (const auto &i : Cats) {
		i->meow();
	}
	
	system("pause");
    return 0;
}

