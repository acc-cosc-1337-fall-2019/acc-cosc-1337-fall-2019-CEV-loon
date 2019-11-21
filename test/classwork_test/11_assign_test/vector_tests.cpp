#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE(" test vector w stack mem")
{
	vector v(5);
	vector v2 = v;
	REQUIRE(v.size() == v2.size());
}