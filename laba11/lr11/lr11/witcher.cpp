#include "stdafx.h"
#include "witcher.h"


void witcher::fight(monster * monst)
{
	damA += 11;
	damB += 15;
	int damage;
	cout << "Бой Ведьмака (" << survivability << ") c " << monst->name << " (" << monst->getSurv() << ")" << endl;
	while (monst->getSurv()>0 || survivability>0)
	{
		damage = damA + rand() % (damB - damA + 1);
		monst->changeSurv(-damage);
		cout << "Ведьмак нанес урон " << damage << endl;
		if (monst->getSurv() <= 0) { break; }
		survivability-=monst->getDamage();
	}
	if (monst->getSurv() <= 0)cout << "Ведьмак win" << endl;
	if (survivability <= 0) cout << "Monster win" << endl;

}

void witcher::oil()
{
	
}