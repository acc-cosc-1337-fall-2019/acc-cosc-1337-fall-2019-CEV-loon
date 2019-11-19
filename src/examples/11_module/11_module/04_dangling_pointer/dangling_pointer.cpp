#include "dangling_pointer.h"

//
using std::cout;
void dangling_pointer()
{
	int * ptr_num = new_int(5);
	int * ptr = ptr_num;
	delete ptr_num;
	ptr_num = nullptr;
	cout << *ptr;
	return 0;
}
