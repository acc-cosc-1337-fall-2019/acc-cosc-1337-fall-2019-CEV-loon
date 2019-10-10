
#include<iostream>
//bank_account.cpp
BankAccount::BankAccount() //constructor
{
	//code to read balance from database
	balance = 500;
}

void BankAccount::deposit(int amount) 
{
	if (amount > 0) 
	{
		balance += amount;
	}
}

void BankAccount::withdraw(int amount)
{
	if (balance > amount) 
	{
		balance -= amount;
	}
}

int BankAccount::get_balance() const
{
	return balance;
}
void display(const bank_account & account)
{
	std::cout<<"balance" << account.balance <<"\n"
}
std::ostream & operator << (std::ostream & out, const BankAccount & b)
{
	out << "\nAmount: " << b.amount;
	return out;
}
std::istream & operator >> (std::istream & in, BankAccount & b)
{
	std::cout << "Enter amount: ";
	in >> b.amount;
	return in;
}
