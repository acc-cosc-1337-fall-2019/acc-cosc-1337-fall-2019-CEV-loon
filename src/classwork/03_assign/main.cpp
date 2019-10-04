//write includes statements
#include "loops.h"
//write using statements for cin and cout

using std::cout; 
using std::cin;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/

int main() 
{
	int num1;
	char user_input;
	int result = 0;
	do{
		cout << "enter a number" << num1;
		cin >> num1;
		result = factoral(num1);
		cout << "factoral " << result;
	}

	while (user_input == 'y');
	{
		cout << "continue? y or n" << user_input;
		cin >> user_input;

	}
	return 0;
}