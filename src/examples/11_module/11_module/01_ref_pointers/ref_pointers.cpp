#include "ref_pointers.h"

//show ref aND POINTER CANN MODIFY DATA POINTS

void ref(int &number, int* numberPtr)
{
	number = 500;
	*numberptr = 1000;
}

