#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include"value_ref.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("test while sum of square")
{
	REQUIRE(sum_of_squares(4) == 30);
}

TEST_CASE("test function ref parameters")
{
	int v = 5;
	int r = 10;
	pass_by_val_and_ref(v, r);

	REQUIRE(v == 5);
	REQUIRE(r == 50);
}