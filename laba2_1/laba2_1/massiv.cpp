#include "massiv.h"
#include "Header.h"

massiv::massiv()
{
	size = 8;
	mas = new T[size];

}


massiv::massiv(int arrSize)
{
	size = arrSize;
	mas = new T[size];
}


massiv::~massiv()
{
	delete[] mas;

}

int massiv::getSize()
{
	// TODO: �������� ���� ��� ����������.
	return 0;
}

void massiv::sort()
{
	// TODO: �������� ���� ��� ����������.
}
