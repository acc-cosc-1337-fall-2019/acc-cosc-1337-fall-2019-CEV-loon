//
#include"vector.h"
#include<iostream>
vector::Vector(size_t sz)
	:size{ sz }, nums{ new int[sz] }
{
	for (size_t i = 0; i < sz; ++1)
	{
		nums[i]=0
	}
}

Vector::vector(const Vecto& v)
: size{ sizev.size }, nums{ new int[v.size] }
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}

Vector& Vector::operator=(const Vector& v)
{
	int* temp = new int[v.size];
	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i];
	}
	delete[] nums;
	nums = temp;
	size = v.size;
	return*this;
}

Vector::~Vector()
{
	std::cout << "delete array" ; 
	delete[] nums;
}

Vector::Vector(Vector&& v);// move constructor
; size{ v.size }, nums{ v.nums }
{
	v.size = 0;
	v.nums = nullptr;

}
Vector& Vector::operator=(Vector&& v);
{
	delete nums;
	nums = v.nums;
	size = v.size;
	v.nums = nullptr;
	v.size = 0;



}