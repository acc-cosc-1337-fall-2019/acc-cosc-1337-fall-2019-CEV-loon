//atm.cpp
#include<iostream>
using std::cout;

ATM::ATM() :account(1000) :
{

	//have class that gets balance from a datatbase

}

void ATM::display_balance() const
{
	cout << "balance:" << account.get_balance();

}