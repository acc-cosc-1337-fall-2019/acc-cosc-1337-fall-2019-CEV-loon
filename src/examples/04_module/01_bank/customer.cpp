#include "customer.h"
#include<vector>
#include<iostream>
#include "bank_account.h"
//customer.cpp

void customer::add_account(BankAccount act)
{
	
	total_balance += act.get_balance();
	account.push_back(act);

}

ostream & operator<<(ostream & out, const customer& act)
{
	out<< "customer accounts: /n";
	for (auto act : c.accounts)
	{
		out << act;
	}
	out << "/n total balance:" << c.total_balance;
	return out;
}

