#pragma once
template <class T> class massiv {
public:
	struct node {
		T d;
		node* next;
	};

	node* headOfmassiv, * endOfmassiv;
	int iterator;


	massiv() { 
		headOfmassiv = 0; 
		endOfmassiv = 0; 
		iterator = 0; 
	}


	void Add(T d) {
		node* temp = new node;
		temp->d = d;
		temp->next = headOfmassiv;
		headOfmassiv = temp;
		iterator++;
	}

	massiv& operator[](int index) {
		node* temp = headOfmassiv;
		for (int i = 0; i < index; i++) {
			temp = temp->next;
		}
		return *temp->d;
	}


	massiv& operator==(massiv& a) {
		node* temp = headOfmassiv;
		node* temp1 = a.headOfmassiv;
		bool flag = true;
		if (iterator != a.iterator) {
			cout << "different size = not equel" << endl;
			return *this;
		}
		else {
			while (temp) {
				if (temp->d != temp1->d) {
					flag = false;
					break;
				}
				temp = temp->next;
				temp1 = temp1->next;
			}
		}
		if (flag) {
			cout << "equal\n";
		}
		else {
			cout << "not equal\n";
		}
		return *this;
	}


	massiv& operator!=(massiv& a) {
		node* temp = headOfmassiv;
		node* temp1 = a.headOfmassiv;
		bool flag = true;
		if (iterator != a.iterator) {
			cout << "different size => not equel" << endl;
			return *this;
		}
		else {
			while (temp) {
				if (temp->d != temp1->d) {
					flag = false;
					break;
				}
				temp = temp->next;
				temp1 = temp1->next;
			}
		}
		if (flag) {
			cout << "equal\n";
		}
		else {
			cout << "not equal\n";
		}
		return *this;
	}


	void printAll() {
		node* temp = headOfmassiv;
		while (temp != 0) {
			cout << temp->d << " ";
			temp = temp->next;
		}
		cout << "\n";
	}


	void print(T d) {
		cout << d;
	}

	~massiv() {
		node* temp;
		while (headOfmassiv != 0) {
			temp = headOfmassiv->next;
			delete headOfmassiv;
			headOfmassiv = temp;
		}
	}
};