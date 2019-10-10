//atm.h
//#include"bank_account.h"

class ATM {

public:
	ATM();
	void deposit(int amount);
	void withdraw(int amount);
	void display_balance() const;



private:

	bankaccount;
};
