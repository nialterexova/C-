#pragma once
#include "footballer.h"
class Match
{
public:
	std::vector<footballer*>A;
	std::vector<footballer*>B;
	pair<int, int> score;
	int timePlay;
	Match();
	~Match();
	void print();
	void move();
	void play();
};

