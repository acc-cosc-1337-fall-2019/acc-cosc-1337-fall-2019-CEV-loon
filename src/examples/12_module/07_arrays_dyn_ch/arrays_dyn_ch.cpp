#include "arrays_dyn_ch.h"
#include<iostream>
#include<vector>
#include<string>
using std::cout; 
void dynamicchararray()
{
	const int size = 10;
	char* name = new char[size];
	std::cout << "enter name:";
	std::cin.getline(name, size);
	
	cout<< name<<'\n';
	delete[] name;
	name = nullptr;
	char* name1 = new char[size];
	name1[0] = 'j';
	name1[1] = 'o';
	name1[2] = 'e';
	name1[3] = '\0';//terminat char array
	std::cout << name1 << "\n";
		delete[] name1;
		name1 = nullptr;
}
