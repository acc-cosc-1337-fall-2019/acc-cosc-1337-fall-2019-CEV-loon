#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE(" test vector w stack var")
{
	vector v(5);
	vector v2 = v;
	REQUIRE(v.size() == v2.size());
}
TEST_CASE("test vector w heap var")
{
	vector v(5);
	vector v2 = v;
	//v[1] = 5;
	REQUIRE(v[1] != v2[1]);
}
Vector get_vector()
{
	Vector v(1);
	v = get_vector();
}
TEST_CASE("example by value")
{
	Vector v(1);
	v = get_vector();

	REQUIRE(v.size() == 3);

}