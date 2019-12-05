//#include "src/examples/12_module/08_arrays_dyn_1/bank_account.h"
#include<iostream>
#include"bank_account.h"
int main()
{
	//stack/static array of objects
	bankaccount accounts[3];
	//read data file or database
	//initialize the balances

	//iterate array with auto and display balance
	for (int i = 0; i < 3; ++i)
	{
		std::cout << accounts[i].getbalance() << "\n";

	}
	//stack/static array
	//read data file or database
	//initialize with an initializer list
	bankaccount accounts1[3] = { bankaccount(5),bankaccount(10),bankaccount(50) };
	//create static array of accounts initalize accounts w 5, 10, 50, and 100 
	

	//write code to display balances

	   
	return 0;
}