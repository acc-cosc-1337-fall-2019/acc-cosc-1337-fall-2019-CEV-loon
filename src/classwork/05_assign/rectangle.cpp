//Write include statement
#include<iostream>
#include<vector>

#include "rectangle.h"
/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

void Rectanglee::calculate_area() 
{
	area = height * width;
	
}

int Rectanglee::get_area()const
{
	return area;
}



std::ostream & operator<<(std::ostream & out, const Rectanglee & r)
{
	out << "Area: " << r.area << '\n';
	return out;
}

