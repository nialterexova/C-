#include "stdafx.h"
#include "Cat.h"


Cat::Cat()
{
	chanceEscape = 50 + rand() % (70-50+1);
	chanceBite = 0 + rand() % (5-0+1);

	cout << "Cat: " << animalWeight << ", " << animalDowniness << ", " << chanceEscape << ", " << chanceBite << endl;
}


Cat::~Cat()
{
}


int Cat::GetChanceEscape()
{
	return chanceEscape;
}


int Cat::GetChanceBite()
{
	return chanceBite;
}


int Cat::Reaction() 
{
	if ((0 + rand() % (100 - 0 + 1)) <= chanceEscape) {
		cout << "Cat ran away" << endl;
		return animalDowniness * (-1.5);
	}
	if ((0 + rand() % (101)) <= chanceBite) {
		cout << "Cat bit the child" << endl;
		return animalDowniness * (-2);
	}
	cout << "Cat play with child" << endl;
	return animalDowniness * 2;
}
