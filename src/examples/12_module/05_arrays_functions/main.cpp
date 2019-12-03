#include "arr_functions.h"
using std::cout;
 int main() 
{
	const int SIZE = 5;

	int hours[SIZE] = { 5, 10, 30, 20, 7 };

	int* hours_ptr = hours;

	std::cout<< "\n";
    iterate_array(hours_ptr, SIZE);
	int* numbers = new int[SIZE];//allocate memory
	for (int i = 0; i < SIZE; ++i)
	{
		numbers[i] = 0;
	}
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << numbers[i] << "\n";
	}
	delete[] numbers;
	numbers = nullptr;
	return 0;
}