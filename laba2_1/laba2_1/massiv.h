using namespace std;

class massiv
{
private:
	T* mas; //��������� �� ������
	int size; //������ �������
public:
	massiv(); //����������� �� ���������
	massiv(int); //����������� ������� � �������� ��������
	~massiv(); //�����������
	int getSize(); //�������� ������
	void sort(); //����������
};

