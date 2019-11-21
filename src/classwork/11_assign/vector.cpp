//

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