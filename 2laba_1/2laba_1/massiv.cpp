#include "massiv.h"



massiv::massiv() //����������� �������� ������
{
	head = 0;
	end = 0;
	count = 0;
}


massiv::~massiv() //���������� ������� ������
{
	delAll();
}


int massiv::getCount() //�������� ���-�� ��������� � ������
{
	return count;
}


bool massiv::Del(int pos) //�������� �������� �� �������
{
	if ((pos <= count) && (pos > 0)) { //�������� �� ������������ �������
		int i = 1;
		elementInfo* forDel = head; //������� �� ������ ������� �� ������
		while (i < pos) {
			forDel = forDel->next;
			i++;
		}
		elementInfo* prevDel = forDel->prev; //��������� ���������� 
		elementInfo* nextDel = forDel->next; // ��������� ���������
		if (pos == 1) head = nextDel; else prevDel->next = nextDel; // ���������� ������ �� ��������� �������
		if (pos == count) end = prevDel; else nextDel->prev = prevDel; // ���������� ������ �� ����������
		delete forDel; // ������� �������
		count--;	
	}
	return true;
}


bool massiv::delAll() //�������� ���� ������
{
	while(count != 0) {
		Del(1);
	}
	return true;
}


bool massiv::Insert(NOTE x) // ������� ��������
{
	elementInfo* add = new elementInfo; // ������� ����� �������

	if (count == 0) { //� ������ ������� ������
		add->next = NULL; //��������� ������
		add->prev = NULL;
		add->el = x; //���������� ������
		head = end = add; //������� - ������ � �����
		count = 1;
		return true;
	}			
						//� ������ �� ������� ������
	int k = findPlace(x); //���������� ����� ������� ��������
	if (k == 1) {		//���� ����� ������� - ������
		add->prev = NULL; //����������� ���
		add->el = x; //���������� ������
		add->next = head; // ��������� - ������ ������
		head->prev = add; // ���������� ������� ������ ������ - ����� �������
		head = add; // ����� ������
		count++;
		return true;
	}
	if (k > count) { // ���� ������� ���������
		add->next = NULL; // ���������� ���
		add->el = x; // ���������� ������
		add->prev = end; // ���������� - ������ �����
		end->next = add; // ��������� � ������� ������ - ����� �������
		end = add; // ����� �����
		count++;
		return true;
	}
					//������� � ������ ����� ������
	add->el = x; //���������� ������
	elementInfo* ins = head; // ������� ������� ����� ������� ���������
	int i = 1;
	while (i < k) {
		ins = ins->next;
		i++;	
	}
	elementInfo* prevIns = ins->prev; //������� ����� �����������
	prevIns->next = add; // ��������� ������
	add->next = ins;
	add->prev = prevIns;
	ins->prev = add;
	count++;
	return true;
}


int massiv::Print() //������ ���� ���������
{
	elementInfo* pr = head;
	for (int i = 1; i <= count; i++) {
		cout << i << ". " << endl;
		pr->el.printInfo();
		pr = pr->next;
	}
	return 0;
}


int massiv::whoIsOlder(NOTE one, NOTE two) //����������� ��� �� ���� ������
{
	for (int i = 2; i >= 0; i--) {
		if (one.date[i] != two.date[i]) {
			if (one.date[i] > two.date[i]) return 2;
			else return 1;
		}
	}
	return 0;
}

int massiv::findPlace(NOTE x) //����� ����� �� �������� � ������
{
	int i = 1;
	elementInfo * forFind = head;
	for (i = 1; i <= count; i++) {
		if (whoIsOlder(forFind->el, x) == 2) return i;
		forFind = forFind->next;
	}
	return i;
}

bool massiv::findNumber(string num) // ����� �������� �� ������ ��������
{
	elementInfo* forFind = head;
	for (int i = 1; i <= count; i++) {
		if (forFind->el.phone == num) {
			forFind->el.printInfo();
			return true;
		}
		forFind = forFind->next;
	}
	return false;
}
