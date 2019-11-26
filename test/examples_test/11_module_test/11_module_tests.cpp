#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"ref_pointer.ccp"
#include"ref_pointer.h"
#include<vector>
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
TEST_CASE("test reserve function new allc.")
{
	vector v;
	REQUIRE(v.capasity() == 0);

	v.reserve(8);
	REQUIRE(v.capasity() == 8);

}
TEST_CASE("test resz for nw rez")
{
	Vector v;
	REQUIRE(v.capasity() == 0)
		v.Resize(10);

	REQUIRE(v.capasity() == 10);

}

TEST_CASE("mnmjknm")
{
	Vector v;
	REQUIRE(v.Size() = 0);
	v.push_Bacl(3);
	REQUIRE(v.Size() == 1);
	REQUIRE(v[0] == 3);

}