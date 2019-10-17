//savings_account.h
#include"bank_account.h"
class savings_account : public BankAccount
{
public:
	savings_account(int bal, float i=.009):
		BankAccount(bal), interest_rate(i){}
	void add_intrest();

private:
	const float interest_rate;
	const float time = 1.0 / 12.0;



};