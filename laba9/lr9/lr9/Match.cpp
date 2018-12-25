#include "stdafx.h"
#include "Match.h"


Match::Match()
{
	A.push_back(new footballer(0, 15));
	B.push_back(new footballer(50, 15));
	for (int i = 1; i < 11; i++) {
		A.push_back(new footballer(0+rand()%(25-0+1), 0 + rand() % (30 - 0 + 1)));
		B.push_back(new footballer(25 + rand() % (50 - 25 + 1), 0 + rand() % (30 - 0 + 1)));
	}
	score = make_pair(0, 0);
	timePlay = 0;
}


Match::~Match()
{
}

void Match::play()
{
	if (rand() % 2 == 0) A[1 + rand() % 10]->ball = 1; else B[1 + rand() % 10]->ball = 1;
	do{
		move();
	print();
	} while (timePlay < 100 && score.first < 5 && score.second < 5);

}


void Match::print()
{

	system("cls");
	for (int j = 0; j <= 30; j++) {
		for (int i = 0; i <= 50; i++) {
			for (int k = 0; k < 11; k++) {
				if (A[k]->getX() == i && A[k]->getY() == j) {
					if (A[k]->ball == 1) cout << "A"; else
					cout << "a";
					break;
				}
				if (B[k]->getX() == i && B[k]->getY() == j) {
					if (B[k]->ball == 1) cout << "B"; else
						cout << "b";
					break;
				}
				if (k == 10) cout << " ";
			}

		}
		cout <<"|     ";
		if (j < 11) cout <<"A" << j <<"  "<< A[j]->energy;
		if (j>11 && j<23)cout << "B" << j-12 << "  " << B[j-12]->energy;
		if (j == 25) cout <<"Time:  "<< timePlay;
		cout << endl;
	}
	cout << "Score: " << score.first << " : " << score.second << endl;
	Sleep(2000);
}

void Match::move() 
{
	timePlay += 1;
	for (int i = 1; i < 11; i++) {
		if ((timePlay % 5) == 0 && i!=0) {
			if (A[i]->play == 1) A[i]->Energy5();
			if (B[i]->play == 1) B[i]->Energy5();
		}
		try { //----------------------исключение------------------
			if (A[i]->play == 0 && A[i]->ball == 1) throw 1;
			if (B[i]->play == 0 && B[i]->ball == 1) throw 1;
		}
		catch (int a) {
			if (a == 1) {
				for (;;) {
					int kom = 1 + rand() % 2;
					int pl = 1 + rand() % 10;
					if (kom == 1 && A[pl]->play == 1) {
						A[pl]->ball = 1; break;
					}
					if (kom == 2 && B[pl]->play == 1) {
						B[pl]->ball = 1; break;
					}
				}
			}
		}//---------------------исключение------------------------
		if (A[i]->play==1) A[i]->xy= make_pair(rand()%51, rand()%31);
		if (B[i]->play == 1) B[i]->xy = make_pair(rand() % 51, rand() % 31);

		if (A[i]->ball == 1) { //--------------если-м€ч-у-ј-игрока-----
			for (int k = 1; k < 11; k++)//--------попытка-отн€ть-м€ч-------
			{
				if ((abs(A[i]->xy.first - B[k]->xy.first)<=1)&&(abs(A[i]->xy.second - B[k]->xy.second)<=1)) {
					int ver = 50 + (B[k]->power - A[i]->power) / 2;
					if (rand() % 101 < ver) {//--------успешно-----
						A[i]->ball = 0;
						B[k]->ball = 1;
					}
				}
			}
			if (A[i]->ball == 1) {//-------если-не-отн€ли,-попытка-забить A[]
				if ((abs(A[i]->xy.first - B[1]->xy.first)<=5) && (abs(A[i]->xy.second - B[1]->xy.second)<=5)) {
					int ver = 50+ (B[1]->power - A[i]->power) / 2;
					if (rand() % 101 < ver) {//-----goool------
						score.first += 1;
						A[i]->ball = 0;
						B[1+rand()%10]->ball = 1;
					}
					else {
						A[i]->ball = 0;
						A[1 + rand() % 10]->ball = 1;
					}
				}
			}
		}

		if (B[i]->ball == 1) { //--------------если-м€ч-у-B-игрока-----
			for (int k = 1; k < 11; k++)//--------попытка-отн€ть-м€ч-------
			{
				if ((abs(B[i]->xy.first - A[k]->xy.first)<=1)&& (abs(B[i]->xy.second - A[k]->xy.second) <= 1)) {
					int ver = 50 + (A[k]->power - B[i]->power) / 2;
					if (rand() % 101 < ver) {//--------успешно-----
						B[i]->ball = 0;
						A[k]->ball = 1;
					}
				}
			}
			if (B[i]->ball == 1) {//-------если-не-отн€ли,-попытка-забить B[]
				if ((abs(B[i]->xy.first - A[1]->xy.first) <=5) && (abs(B[i]->xy.second - A[1]->xy.second) <= 5)) {
					int ver = 50 + (A[1]->power - B[i]->power) / 2;
					if (rand() % 101 < ver) {//-----goool------
						score.second += 1;
						B[i]->ball = 0;
						A[1 + rand() % 10]->ball = 1;
					}
					else {
						B[i]->ball = 0;
						B[1 + rand() % 10]->ball = 1;
					}
				}
			}
		}


		A[i]->N -= 1;
		B[i]->N -= 1;
		if (A[i]->N == 0) { A[i]->play = 1; A[i]->energy = 20; }
		if (B[i]->N == 0) { B[i]->play = 1; B[i]->energy = 20; }

	}
}