#include<vector>

using std::vector;


/*
Write a value return function prototype get_max_from_vector with a
const reference vector of ints parameter that returns an int
@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/


int get_max_from_vector(const std::vector<int>& numbers);


/*
Write a function prototype named is_prime with an integer parameter
thatgiven a number returns true if prime or false if not prime
@param number: Any whole number
@return: bool if prime False if not
*/

// decided to using questionable code !!!!!!!!!!!!
// the idea is pirimes have a modulus when divided by 2 so this is a simple logic test to deturmine if a given number is prime or not
bool is_prime(int);


/*
Write a a function prototype named vector_of_primes with an integer
parameterthat Given a number returns all the prime numbers up to
the number
@param int integer value
@return vector of ints containing prime values up to a value
*/

vector<int> vector_of_primes(int num);

