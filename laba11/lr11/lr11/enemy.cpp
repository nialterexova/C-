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
	cout << "�����������. ������ ���������� ��� ����� ����������? " << endl;
	cout << "1-�������?" << endl;
	cout << "2-� ��� ����� �������!" << endl;
	int x;
	cin >> x;
	if (x == 1) {
		cout << "��... �������� ������ � ��� � ����, ������ �������� �� �����. ����� ������ �������!!! � � �� ������ ������� ����� �������... �� �������, �����������, ������ �������. � �� ��� � ������� ���������..." << endl;
		return 0;
	} 
	if (x == 2) {
		cout << "�� ����� ��������! 5 ����� �� �����!" << endl;
		return 1;
	} 
}
