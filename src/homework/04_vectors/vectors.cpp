#include"vectors.h"


/*
Write a value return function get_max_from_vector with a const reference
vector of int-parameter that returns the max value in a vector
@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(const std::vector<int>& numbers) 
{
	int max = numbers[0];//make first number in vector max

	//iterate vector to compare max against each number
	for (auto n : numbers)//for each n(int in vector) in numbers
	{
		if (n > max) 
		{
			max = n;
		}
	}

	return max;
}


/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime
@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int num) 
{//use division by 2 to determine if number is prime or not

	if (num < 2) 
	{
		return false;
	}

	for (int i = 2; i < num; i++) 
	{
		if (num % i == 0)//if divisible by 2 not prime
		{
			return false;
		}
	}

	return true;//not divisible by 2 prime
}



/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number
Example given number 10 returns a vector with elements 2,3,5,7,
@param int integer value
@return vector of ints containing prime values up to a value
Make sure to use the is_prime function to determine if current
number is prime.
*/
vector<int> vector_of_primes(int num) 
{
	vector<int> primes;

	for (int i = 0; i < num; i++) 
	{
		if (is_prime(i)) 
		{
			primes.push_back(i);
		}
	}

	return primes;
}