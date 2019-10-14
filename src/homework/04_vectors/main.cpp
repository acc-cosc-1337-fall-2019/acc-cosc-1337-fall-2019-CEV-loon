#include<iostream>

using std::cout; using std::cin;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
#include"vectors.h"

int main()
{
	vector<int> nums{ 8, 4, 20, 88, 66, 99 };

	auto res = 'y';
	auto choice = 1;
	auto number = 0;

	do 
	{
		cout << "Enter 1 or 2: ";
		cin >> choice;

		if (choice == 1) 
		{
			int max = get_max_from_vector(nums);
			cout << "Max in vector is : " << max <<"\n";
		}
		else if(choice == 2)
		{
			cout << "Enter a number: ";
			cin >> number;
			vector<int> primes = vector_of_primes(number);

			cout << "Primes: ";
			for (auto p : primes) 
			{
				cout << " "<<  p;
			}
			cout << "\n";
		}
		else 
		{
			cout << "Invalid choice \n: ";
		}
		
		cout << "Continue y or n? ";
		cin >> res;

	} while (res == 'Y' || res == 'y');

	return 0;
}