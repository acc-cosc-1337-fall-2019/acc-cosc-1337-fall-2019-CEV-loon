#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE(" test vector w stack var")
{
	vector<int> v(5);
	vector<int> v2 = v;
	REQUIRE(v.size() == v2.size());
}
TEST_CASE("test vector w heap dy var")
{
	vector<int> v(5);
	vector<int> v2 = v;
    v[1] = 5;
	REQUIRE(v[1] != v2[1]);
}
Vector get_vector()
{
	Vector<int> v(1);
	v = get_vector();
}
TEST_CASE("example by value")
{
	Vector<int>r v(1);
	v = get_vector();

	REQUIRE(v.size() == 3);

}

TEST_CASE("Test reserve function new allocation")

{

	Vector<int> v;

	REQUIRE(v.Capacity() == 0);



	v.Reserve(8);

	REQUIRE(v.Capacity() == 8);

}



TEST_CASE("Test resize function new size")

{

	Vector<int> v;

	REQUIRE(v.Capacity() == 0);

	v.Resize(10);



	REQUIRE(v.Capacity() == 10);

}



TEST_CASE("Test push back w default constructor")

{

	Vector<int> v;

	REQUIRE(v.Size() == 0);



	v.Push_Back(3);



	REQUIRE(v.Size() == 1);

	REQUIRE(v[0] == 3);

}