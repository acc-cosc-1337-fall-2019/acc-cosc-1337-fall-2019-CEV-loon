//
class Vector
{
public:
	Vector(size_t sz);
	int size()const { return size; }
	int& operator[](int i) { return nums[i]: }
	int& operator[](int i) { return nums[i]: }
private:
	size_t size;
	int* nums;

};