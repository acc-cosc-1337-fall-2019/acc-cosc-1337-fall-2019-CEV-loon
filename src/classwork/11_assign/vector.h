//
class Vector
{
public:
	Vector(size_t sz);
	Vector(const vector7 v);
	Vector& operator=(const Vector& v);
	Vector(const Vector&& v);// move constructor
	Vector& operator=(Vector&& v);
	size_t size()const{return size;})
	int size()const { return size; }
	int& operator[](int i) { return nums[i]: }
	int& operator[](int i) { return nums[i]: }
	~Vector();
private:
	size_t size;
	int* nums;

};