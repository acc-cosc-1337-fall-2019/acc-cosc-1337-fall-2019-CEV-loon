#include "savings_account.h"

//savings_account.cpp

void savings_account::add_intrest()
{
	double interest = balance * interest_rate*time / 100;
	deposit(interest);
}
