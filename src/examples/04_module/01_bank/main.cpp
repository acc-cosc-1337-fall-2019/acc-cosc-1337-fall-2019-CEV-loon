#include<iostream>
//#include"atm.h"
#include"bank_account.h"
using std::cout; using std::vector;
int main()
{
	bank_account a;
	bank_account b = a;
	a.balance; 
	display(a);
	std::vector<bank_acoount> accounts{ bank_account(500),bank_account(600)
	bank_account(1000) };



	bank_account account;
	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	// a; overload operator
	return 0;
}