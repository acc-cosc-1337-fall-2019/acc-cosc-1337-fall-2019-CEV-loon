//
#include "report.h"
#include<iostream>
:accounts{new bankaccount[size]}
for (int i = 0; i < size; ++i) 
{
	account[i] = new bankaccount(i * 10);
}
myreport::myreport()
{
	accounts = new bankaccount*[size];
	//dyn heap mem  //for each 5 addresses
	accounts = new BankAccount*[size]; //call default constructor
}

void myreport::display() const;
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << accounts[i].getbalance() << "\n";
	}
}

report::~myreport()
{
	
	for (int i = 0; i < size; ++i)
	{
		delete account[i];
	}
	delete[] accounts;
}

