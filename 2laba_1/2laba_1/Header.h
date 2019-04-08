#pragma once
#include <iostream>
#include <string>

using namespace std;


struct NOTE
{
	string name = "name";
	string phone = "+79003003030";
	int date[3] = { 31,12,2000 };
	void printInfo() {
		cout << "name: " << name << endl;
		cout << "phone: " << phone << endl;
		cout << "date: " << date[0] << "." << date[1] << "." << date[2] << endl;
	}
};