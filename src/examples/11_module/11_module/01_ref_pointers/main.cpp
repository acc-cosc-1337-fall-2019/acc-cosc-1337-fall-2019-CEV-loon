#include "ref_pointers.h"
#include<iostream>
unsing std::cout;


int main() 
{
	int num1 = 10;
	int num2 = 20;

	int& numref = num1;
	int* numptr = &num2;

	ref(numref, numptr);
	cout<<"num1:" << num1 << "num2:" << num2 << "/n";

	return 0;
}