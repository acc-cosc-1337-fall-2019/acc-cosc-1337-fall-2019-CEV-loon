#include<iiostream>
#include"atm.h"

using std::cout; using std::vector;
int main()
{
	std::vector<bank_acoount> accounts{ bank_account(500),bank_account(600)
	bank_account(1000) };



	bank_account account;
	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();

	return 0;
}