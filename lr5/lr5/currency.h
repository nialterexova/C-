
class currency
{
public:
	virtual void setMoney(double M) = 0;
	virtual double getMoney() = 0;
	virtual void changeMoney(double X) = 0;
};

class ruble :
	public currency
{
private:
	double curRuble;
public:
	ruble() {};
	~ruble() {};
	void setMoney(double Rub) override {
		curRuble = Rub;
	}
	double getMoney() override {
		return curRuble;
	}
	void changeMoney(double X) override {
		curRuble += X;
	}
};

class dollar :
	public currency
{
private:
	double curDollar;
public:
	dollar() {};
	~dollar() {};
	void setMoney(double Dol) override {
		curDollar = Dol;
	}
	double getMoney() override {
		return curDollar;
	}
	void changeMoney(double X) override {
		curDollar += X;
	}
};

class euro :
	public currency
{
private:
	double curEuro;
public:
	euro() {};
	~euro() {};
	void setMoney(double Eur) override {
		curEuro = Eur;
	}
	double getMoney() override {
		return curEuro;
	}
	void changeMoney(double X) override {
		curEuro += X;
	}
};

