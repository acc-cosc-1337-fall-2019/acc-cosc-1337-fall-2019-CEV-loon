#include<iostream>
//#include"atm.h"
#include"checking_account.h"
#include"bank_account.h"
#include"customer.h"
#include<vector>
#include"savings_account.h"
#include"main.h"
using std::cout; using std::vector; using std::cin;
int main()
{
	checking_account a(1500);
	cout<< a.get_balance();
	checking_account c= a+b(1000);
	cout<< a;

	savings_account savings(500);
	cout<<"/n"<< savings.get_balance(0)<<"/n";
	savings.add_interest();
	cout<< savings;


	BankAccount c = a + savings;
	 cout<< c;

	/*customeraddaccount(bank_account(500))
		customeraddaccount(bank_account(1500))
		customeraddaccount(bank_account(5000))
		cout << customer;
	return 0;
}
	BankAccount b = a;
	a.balance; 
	display(a);
	std::vector<BankAccount> accounts{ BankAccount(500),BankAccount(600)
	BankAccount(1000) };*/



	//bank_account account;
	/*ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	 a; overload operator*/
	
	return 0;
}