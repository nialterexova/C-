#ifndef MY_SYMBOL_H
#define MY_SYMBOL_H

#include "currency.h"
class account
{
public:
	int ID;	
	ruble Rub;
	dollar Dol;
	euro Eur;
	account(int id, double R, double D, double E);
	~account();
	int getID();
	void printMoney();
};

#endif //MY_SYMBOL_H
