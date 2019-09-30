#include<iostream>
#include "do_while.h"
//#include "switch.h"

using std::cout;
using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  


//Write code for function run_menu that prompts  user for a 
//number from 1 to 4 and displays the option user selected.
/*
Use the existing menu_option function from /example/02_module/03_switch
folder.

*/

void prompt_user()
{
	auto user_choice = 'y';
	do
	{
		
		cout << "loop again? y or n?";
		cin >> user_choice;
	}
	while (user_choice == 'y' || user_choice == 'y');

	string menu(int menu_option)
	{
		switch (menu_option)
		{
		case 1:
			return "option 1";
		case 2:
			return "option 2";
		case 3:
			return "option 3";
		case 4:
			return "option 4";
		default:
			return "invalid";
		}
		return 0;
	}
	void run_menu()
	{
		auto user_choice = 'y'
		auto choice = 0;
		do
		{
			cout << "enter a choice";
			cin >> choice;
			while(choice>1 ||choice >4)
			cout<< menu(choice)<<"/n";
			cout <<"continue y or n";
			cin>> user_choice;
		} while (user_choice == 'y' || user_choice == 'y'); 
	}
}