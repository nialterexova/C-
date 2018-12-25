#include "stdafx.h"
#include "enemy.h"


enemy::~enemy()
{
}


monster::monster()
{
}


monster::~monster()
{
}


monster* monster::createMonster(monster_ID id)
{
	monster* p=nullptr;
	switch (id)
	{
	case dragonoid_ID:
		p = new dragonoid();
		break;
	case ghost_ID:
		p = new ghost();
		break;
	case corpse_ID:
		p = new corpse();
		break;
	default:
		assert(false);
		break;
	}
	return p;
}


human::human()
{
}


human::~human()
{
}


human* human::createHuman(human_ID id)
{
	human* p = nullptr;
	switch (id)
	{
	case robber_ID:
		p = new robber();
		break;
	case man_ID:
		p = new man();
		break;
	default:
		assert(false);
		break;
	}
	return p;
}


dragonoid::dragonoid()
{
	name = "dragonoid";
	survivability = rand() % 31;
	armor = rand() % 11;
	damage = rand() % 16;
}


dragonoid::~dragonoid()
{
}


ghost::ghost()
{
	name = "ghost";
	survivability = rand() % 51;
	armor = rand() % 3;
	damage = rand() % 6;
}


ghost::~ghost()
{
}


corpse::corpse()
{
	name = "corpse";
	survivability = rand() % 21;
	armor = rand() % 6;
	damage = rand() % 9;
}


corpse::~corpse()
{
}


robber::robber()
{
	name = "robber";
	survivability = rand() % 31;
	armor = rand() % 11;
	damage = rand() % 11;
	money = rand() % 21;
}


robber::~robber()
{
}


int robber::reaction()
{
	cout << "I kill you!!!" << endl;
	return 1;
}


man::man()
{
	name = "man";
	survivability = rand() % 11;
	armor = rand() % 4;
	damage = rand() % 4;
	money = rand() % 11;
}


man::~man()
{
}

int man::reaction()
{
	cout << "Приветствую. Хочешь заработать или силой померяться? " << endl;
	cout << "1-Задание?" << endl;
	cout << "2-Я все равно сильнее!" << endl;
	int x;
	cin >> x;
	if (x == 1) {
		cout << "Да... Завелись чудища у нас в лесу, ничего поделать не можем. Вчера Дуську утащили!!! А я ей только недавно цветы подарил... Вы сходите, разбиритесь, мистер Ведьмак. А мы вам с деревни наскребем..." << endl;
		return 0;
	} 
	if (x == 2) {
		cout << "Ну давай проверим! 5 монет на бочку!" << endl;
		return 1;
	} 
}
