#pragma once
class footballer
{
public:
	footballer();
	footballer(int x, int y);
	~footballer();
	int getX() { return xy.first; }
	int getY() { return xy.second; }
	bool ball=0;
	bool play=1;
	int power;
	int energy;
	pair<int, int>xy;
	void Energy5();
	int N=-1;
};

