//bank_account.h
#include"bank_account.cpp"
#include<iostream>
class BankAccount 
{
public:
	BankAccount();
	BankAccount(int b) : balance(b) {};//inline constructor
	void deposit(int amount);
	void withdraw(int amount);
	int get_balance() const;//const makes class members read only
	friend void display(const bank_account & account);
	friend std::ostream & operator << (std::iostream & out,
		const bank_account & b);

private:
	int balance;

};