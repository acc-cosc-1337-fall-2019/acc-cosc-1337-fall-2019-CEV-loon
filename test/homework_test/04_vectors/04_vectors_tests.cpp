#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is it prime")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);

}

TEST_CASE("Test get vector of primes") 
{
	vector<int> primes_of_10{ 2, 3, 5, 7 };
	vector<int> primes_of_50{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

	REQUIRE(vector_of_primes(10) == primes_of_10);
	REQUIRE(vector_of_primes(50) == primes_of_50);

}