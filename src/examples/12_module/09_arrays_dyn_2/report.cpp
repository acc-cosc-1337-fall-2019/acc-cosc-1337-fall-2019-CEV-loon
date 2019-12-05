//
#include "report.h"
#include<iostream>

report::report()
{
	//dyn heap mem
	accounts = new BankAccount[5]; //call default constructor
}

void report::display() const;
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << accounts[i].getbalance() << "\n";
	}
}

report::~report()
{
	delete[] accounts;
}
