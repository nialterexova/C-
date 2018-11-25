#include "Child.h"
#include "Animal.h"
#include <vector>

class Home
{
public:
	Home(int N);
	~Home();
	void PlayAnimal(Child* ch);
	int Num;
	vector <Animal*> Pets;
};

