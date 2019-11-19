#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"ref_pointer.ccp"
#include"ref_pointer.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE(" ref and ptr")
{

	int num1 = 10;
	int num2 = 20;

	int& numref = num1;
	int* numptr = &num2;

	ref(numref, numptr);
	REQUIRE(num1 == 500);
	REQUIRE(num2 == 1000);

}
