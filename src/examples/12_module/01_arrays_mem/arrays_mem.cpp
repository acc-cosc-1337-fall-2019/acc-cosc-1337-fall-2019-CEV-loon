#include "arrays_mem.h"
#include <iostream>
//write code for for stack_array and display each element to screen

void stack_array()
{
	const int size = 5;
	int hours[5] = { 5,10,30,20,7 };
	hours[0] = 50;//access and modify
	//iterate array
	for (int i = 0; i < size; ++i)
	{
		std::cout << hours[i] << "\n";
	}
	//iterate w for ranged
	for (auto hour : hours)
	{
		std::cout << hour << "\n";
	}
	int* first_element = hours;
	std::cout << "first_element;" << *first_element << "\n";
	std::cout << "second_element;" << *(first_element + 1) << "\n";
	*first_element++;
	*first_element++;
	std::cout << "third_element;" << *first_element++ << "\n";
	*first_element--;
	std::cout << "third_element" << *first_element-- << "\n";

	int*hours_ptr = hours;
	//iterate array wpointer
	for (int i = 0; i < size; ++i)
	{
		std::cout << *hours_ptr << "\n";
		hours_ptr++;
	}


	//iterate pointer backwaqrds
	for (int i = 0; i < size; i++)
	{
		hours_ptr--;
		std::cout << *hours_ptr << "\n";
	}
}