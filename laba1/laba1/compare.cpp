
#include "stdafx.h"

int val(string a, string b, string c) {
	int l[3], max=0;
	l[0] = a.length();
	l[1] = b.length();
	l[2] = c.length();
	for (int i = 0; i < 3; i++) {
		if (l[i] > max) max = l[i];
	}
	cout << "string value: ";
	for (int i = 0; i < 3; i++) {
		if (l[i] == max) cout << i+1 << " ";
	}
	cout << endl;
	return 0;
}

int valconst(const string a, const string b, const string c) {
	int l[3], max = 0;
	l[0] = a.length();
	l[1] = b.length();
	l[2] = c.length();
	for (int i = 0; i < 3; i++) {
		if (l[i] > max) max = l[i];
	}
	cout << "string value const: ";
	for (int i = 0; i < 3; i++) {
		if (l[i] == max) cout << i + 1 << " ";
	}
	cout << endl;
	return 0;
}

int point(string *a, string *b, string *c) {
	int l[3], max = 0;
	l[0] = (*a).length();
	l[1] = (*b).length();
	l[2] = (*c).length();
	for (int i = 0; i < 3; i++) {
		if (l[i] > max) max = l[i];
	}
	cout << "string point: ";
	for (int i = 0; i < 3; i++) {
		if (l[i] == max) cout << i + 1 << " ";
	}
	cout << endl;
	return 0;
}

int pointconst(const string *a, const string *b, const string *c) {
	int l[3], max = 0;
	l[0] = (*a).length();
	l[1] = (*b).length();
	l[2] = (*c).length();
	for (int i = 0; i < 3; i++) {
		if (l[i] > max) max = l[i];
	}
	cout << "string point const: ";
	for (int i = 0; i < 3; i++) {
		if (l[i] == max) cout << i + 1 << " ";
	}
	cout << endl;
	return 0;
}

int adress(string &a, string &b, string &c) {
	int l[3], max = 0;
	l[0] = a.length();
	l[1] = b.length();
	l[2] = c.length();
	for (int i = 0; i < 3; i++) {
		if (l[i] > max) max = l[i];
	}
	cout << "string adress: ";
	for (int i = 0; i < 3; i++) {
		if (l[i] == max) cout << i + 1 << " ";
	}
	cout << endl;
	return 0;
}

int adressconst(const string &a, const string &b, const string &c) {
	int l[3], max = 0;
	l[0] = a.length();
	l[1] = b.length();
	l[2] = c.length();
	for (int i = 0; i < 3; i++) {
		if (l[i] > max) max = l[i];
	}
	cout << "string adress const: ";
	for (int i = 0; i < 3; i++) {
		if (l[i] == max) cout << i + 1 << " ";
	}
	cout << endl;
	return 0;
}