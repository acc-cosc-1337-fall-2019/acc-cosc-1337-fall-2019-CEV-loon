

//show ref aND POINTER CANN MODIFY DATA POINTS
#include"ref_pointers.h"
void ref(int &number, int* numberPtr)
{
	number = 500;
	*numberptr = 1000;
}

