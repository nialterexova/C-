#pragma once
enum monster_ID { dragonoid_ID = 0, ghost_ID, corpse_ID };
enum human_ID { robber_ID = 0, man_ID };

class enemy
{
public:
	~enemy();
	string name;
	int getSurv() { return survivability; }
	void changeSurv(int x) { survivability += x; }
	int getDamage() { return damage; }
protected:
	int survivability;
	int armor;
	int damage;
};

class monster :
	public enemy
{
public:
	monster();
	~monster();
	static monster* createMonster(monster_ID id);
};

class human :
	public enemy
{
public:
	int money;
	human();
	~human();
	virtual int reaction() = 0;
	static human* createHuman(human_ID id);
};

class dragonoid :
	public monster
{
public:
	dragonoid();
	~dragonoid();
};

class ghost :
	public monster
{
public:
	ghost();
	~ghost();
};

class corpse :
	public monster
{
public:
	corpse();
	~corpse();
};

class robber :
	public human
{
public:
	robber();
	~robber();
	int reaction();
};

class man :
	public human
{
public:
	man();
	~man();
	int reaction();
};


