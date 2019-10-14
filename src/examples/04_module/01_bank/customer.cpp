#include "customer.h"

//customer.cpp

void customer::add_account(bank_account act)
{
	total_balance += act.get_balance();
	account.push_back(act);

}

ostream & operator<<(ostream & out, const customer& act)
{
	out << "customer accounts: /n";
	for (auto act : c.accounts)
	{
		out << act;
	}
	out << "/n total balance:" << c.total_balance;
}
