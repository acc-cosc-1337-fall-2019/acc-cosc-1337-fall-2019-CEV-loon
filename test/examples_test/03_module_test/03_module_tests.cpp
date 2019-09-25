#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include"value_ref.h"
#include "vec.h"
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
TEST_CASE("test pass by value")
{
	std::vector<int> nums = { 99,55,1,3,66 };
	std::vector<int> nums_exspected = { 99,55,1,3,66 };
	loop_vector_w_index(nums);
	REQUIRE(nums == nums_exspected);

}
TEST_CASE("test pass by ref")
{
	std::vector<int> nums = { 99,55,1,3,66 };
	std::vector<int> nums_exspected = { 99,55,1,3,66 };
	loop_vector_w_index_ref(nums);
	REQUIRE(nums == nums_exspected);

}
TEST_CASE("test pass by ref for ranged")
{
	std::vector<int> nums = { 99,55,1,3,66 };
	std::vector<int> nums_exspected = { 99,55,1,3,66 };
	loop_vector_w_index_ref(nums);
	REQUIRE(nums == nums_exspected);

}
TEST_CASE("test pass by loop by ref")
{
	std::vector<int> nums = { 99,55,1,3,66 };
	std::vector<int> nums_exspected = { 1000,1000,1000,1000,1000 };
	loop_vector_w_for_ranged_ref(nums);
	REQUIRE(nums == nums_exspected);