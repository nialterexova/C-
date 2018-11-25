#include "stdafx.h"
#include "Header.h"
#include <vector>
#include <ctime>




Home::Home(int N)
{
	Num = N;
	for (int i = 0; i<Num; i++) {
		if ((1 + rand() % 2) == 1) {
			Pets.push_back(new Cat);
			Pets[i]->animalType = 1;
		}
		else { 
			Pets.push_back(new Dog);
			Pets[i]->animalType = 2;
		}

	}
}


Home::~Home()
{
	for (int i=0; i<Pets.size(); i++)
		delete Pets[i];
}


void Home::PlayAnimal(Child* ch)
{
	while (ch->happiness>-50 && ch->happiness<100)
	{
		for (const auto &i : Pets) {
			ch->ChangeHappiness(i->Reaction());
			if (ch->happiness <= -50 || ch->happiness >= 100) break;
		}
	};
	cout << "Happy = " << ch->happiness << endl;
}


