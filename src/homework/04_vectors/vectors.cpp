#include"ranged.h"
#include<iostream>
#include<vector>
#include<string>

#include"vectors.h"

using std::vector;
using std::cout;
using std::cin;


/*
Write a value return function get_max_from_vector with a const reference 
vector of int-parameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/

void loop_vector(const std::vector<int>& numbers)
{
	std::vector<int>numbers={ 8,4,20,88,66,99 };


	for (int i = 0; i < numbers.size(); ++i)
	{
		std::cout << numbers[i] << "\n";
	}

}

/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/

/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/
