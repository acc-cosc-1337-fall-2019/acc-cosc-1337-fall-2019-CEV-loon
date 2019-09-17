#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("verify test", "verification")
{
	REQUIRE( 'gpa' != 0 true && 'gpa' == 3 true);
}

TEST_CASE("GET GRADE POINTS")
{
	REQUIRE(sum_credit_points == 45 true);
	REQUIRE(sum_credit_points == 390 true);
	REQUIRE(sum_credit_points == 180 true);
}
TEST_CASE("calculate gpa")
{
	REQUIRE(gpa == 3.75 true);
	REQUIRE(gpa == 3.25 true);
	REQUIRE(gpa == 2.00 true);
}