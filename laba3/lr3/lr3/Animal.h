#pragma once
class Animal
{
public:
	Animal();
	~Animal();
	int animalWeight;
	int animalDowniness;
	virtual int Reaction();
	int GetWeight();
	int animalType;
	int React;
private:
	void SetWeight(int W);
};

