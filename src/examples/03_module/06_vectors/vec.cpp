//#include "ranged.h"
#include<iostream>
#include<vector>

using std::vector;

/*
Write code for function loop_vector_w_index with no parameters.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67
*/

void loop_vector_w_index()
{
	vector<int> nums = { 3, 5, 99, 8 };

	for (int i = 0; i < nums.size(); ++i)
	{
		std::cout << nums[i] << "\n";
	}
}
/*
Write code for function loop_vector_w_index with a vector of int pass by value parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67
*/
void loop_vector_w_index(std::vector<int> nums)

{

	vector<int> nums = { 3, 5, 99, 8 };
	nums[0]=1000:
	for (int i = 0; i < nums.size(); ++i)
	{
		std::cout << nums[i] << "\n";
	}
}


/*
Write code for function loop_vector_w_index with a vector of int pass by reference parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows : 9 10 99 5  67
*/
void loop_vector_w_index_ref(std::vector<int>nums)
{
	for (int i = 0; i < nums.size(); ++i)
	{
		nums[0] = 1000;
		std::cout << nums[i] << "\n";
	}

}

/*
Write code for function loop_vector_w_index with a vector of int const pass by reference parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows : 9 10 99 5  67
*/

void loop_vector_w_index_(const std::vector<int>& nums)
{
	for (int i = 0; i < nums.size(); ++i)
	{
		std::cout << nums[i] << "\n";
	}


}