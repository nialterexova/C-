#include "stdafx.h"
#include "account.h"


account::account(int id, double R, double D, double E)
{
	ID = id;
	Rub.setMoney(R);
	Dol.setMoney(D);
	Eur.setMoney(E);
}


account::~account()
{
}


int account::getID() {
	return ID;
}

void account::printMoney() {
	cout << "Account: " << ID << endl;
	cout << Rub.getMoney() << " RUB" << endl;
	cout << Dol.getMoney() << " USD" << endl;
	cout << Eur.getMoney() << " EUR" << endl;
	cout << endl;
}