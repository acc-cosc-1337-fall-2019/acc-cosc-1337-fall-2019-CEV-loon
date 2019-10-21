#include<iostream>
#include<vector>
#include"checking_account.h"
#include"savings_account.h"
#include"bank_account.h"

using std::cout; using std::vector; using std::cin;

int main()
{	
	CheckingAccount a(1500);
	cout << "\n cheching account get balance" << checking.get_balance() << "\n";

	SavingsAccount savings(500);
	//cout<<"Calls bank account overload ostream" << savings;
	cout<<"\n Savings get_balance" << savings.get_balance()<<"\n";
	savings.add_interest();
	cout << savings;

	BankAccount& account = savings;
	cout << "\n reference to savings get_balance:" << account.get_balance() << "\n";
	// page 7 examples in blackboard
	return 0;
}