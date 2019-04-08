#include "Header.h"

class massiv
{
	struct elementInfo
	{
		NOTE el;
		elementInfo* next, * prev;
	};
	elementInfo * head, * end; 
	int count;
public:
	massiv();
	~massiv();
	int getCount();
	bool Del(int pos);
	bool delAll();
	bool Insert(NOTE x);
	int Print();
	int whoIsOlder(NOTE one, NOTE two);
	int findPlace(NOTE x);
	bool findNumber(string num);
};

