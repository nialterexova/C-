#include "account.h"

template <typename T>
class order
{
protected:
	T senderID;
	T recipientID;
public:
	order(T	sender, T recipient) {
		senderID = sender;
		recipientID = recipient;
	};
	~order() {};
	virtual void orderDone() = 0;
	virtual void orderPrint() = 0;
};


template <typename T>
class orderRUB : public order<T>
{
private:
	double sum;
public:
	orderRUB(T sender, T recipient, double summa): order<T>(sender, recipient) {
		sum = summa;
	}
	~orderRUB() {};
	void orderDone() override {
		order<T>::senderID->Rub.changeMoney(-sum);
		order<T>::recipientID->Rub.changeMoney(sum);
	}
	void orderPrint() override {
		cout << "order " << endl;
		cout << "from: " << order<T>::senderID->ID << endl;
		cout << "to: " << order<T>::recipientID->ID << endl;
		cout << "SUM: " << sum << " RUB" << endl;
		cout << endl;
	}
};


template <typename T>
class orderUSD : public order<T>
{
private:
	double sum;
public:
	orderUSD(T sender, T recipient, double summa) : order<T>(sender, recipient) {
		sum = summa;
	}
	~orderUSD() {};
	void orderDone() override {
		order<T>::senderID->Dol.changeMoney(-sum);
		order<T>::recipientID->Dol.changeMoney(sum);
	}
	void orderPrint() override {
		cout << "order " << endl;
		cout << "from: " << order<T>::senderID->ID << endl;
		cout << "to: " << order<T>::recipientID->ID << endl;
		cout << "SUM: " << sum << " USD" << endl;
		cout << endl;
	}
};


template <typename T>
class orderEUR : public order<T>
{
private:
	double sum;
public:
	orderEUR(T sender, T recipient, double summa) : order<T>(sender, recipient) {
		sum = summa;
	}
	~orderEUR() {};
	void orderDone() override {
		order<T>::senderID->Eur.changeMoney(-sum);
		order<T>::recipientID->Eur.changeMoney(sum);
	}
	void orderPrint() override {
		cout << "order " << endl;
		cout << "from: " << order<T>::senderID->ID << endl;
		cout << "to: " << order<T>::recipientID->ID << endl;
		cout << "SUM: " << sum << " EUR" << endl;
		cout << endl;
	}
};