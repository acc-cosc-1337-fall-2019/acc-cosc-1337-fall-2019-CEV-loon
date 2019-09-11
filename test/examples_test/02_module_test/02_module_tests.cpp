CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test is even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);
}

TEST_CASE("test get generation")
{
	REQUIRE(get_generation(2000) == "centenial")
		REQUIRE(get_generation(1990) == "millenial")
		REQUIRE(get_generation(1975) == "generation x")
		REQUIRE(get_generation(1960) == "baby boomer")
		REQUIRE(get_generation(1940) == "silent generation")
		REQUIRE(get_generation(1776) == "invalid")
}