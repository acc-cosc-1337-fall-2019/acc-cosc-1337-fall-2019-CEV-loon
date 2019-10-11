#include<iostream>
#include<vector>
#include "atm.h"

using std::cout; using std::vector;

int main()
{
	BankAccount a;
	BankAccount b = a;

	//scan card and enter pin
	//get customer records from db into a vector
	vector<BankAccount> accounts{BankAccount(500), BankAccount(600),
	BankAccount(1000)};

	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	//cout<<atm;

	return 0;
}