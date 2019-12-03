//cpp
#include"arrays_char.h"
#include<iostream>
void stack_character_array()
{
	const int SIZE = 5;
	char name0[] = "john";
	std::cout << name0 << "\n";

	char name1[SIZE] = "mary";
	name1[4] = '\0';//terminate string
	std::cout << name1 << "\n";

	for (int i = SIZE; name1[i] != '\0'; i++)
	{
		std::cout << name1[i];
	}
}