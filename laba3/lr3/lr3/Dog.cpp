#include "stdafx.h"
#include "Dog.h"


Dog::Dog()
{
	React = 1;
	cout << "Dog: " << animalWeight << ", " << animalDowniness << endl;
}


Dog::~Dog()
{
}




int Dog::Reaction()
{
	cout << "Dog play with child" << endl;
	return animalDowniness;
}
