#include "stdafx.h"
#include "Animal.h"


Animal::Animal()
{
	animalWeight = 1 + rand() % (15-1+1);
	animalDowniness = 1 + rand() % (10-1+1);

}


Animal::~Animal()
{
}


int Animal::Reaction()
{
	return 0;
}


int Animal::GetWeight()
{
	return animalWeight;
}


void Animal::SetWeight(int W)
{
	animalWeight=W;
}



