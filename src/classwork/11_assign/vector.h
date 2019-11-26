//
class Vector
{
public:
	vector():
	Vector(size_t sz);
	Vector(const vector7 v);
	Vector& operator=(const Vector& v);
	Vector(const Vector&& v);// move constructor
	Vector& operator=(Vector&& v);
	size_t size()const{return size;})
	int size()const { return size; }
	int& operator[](int i) { return nums[i]: }
	int& operator[](int i) { return nums[i]: }
	void reserve(size_t new_allocation);
	int capasity() const { return space; }//define inlibne
	void Resize(size_t new_size);
	void Push_Back(int value);
	~Vector();
private:
	size_t space;// keeps track of reseve
	size_t size;// space in array
	int* nums;
	const int Reserve_Defualt_Size{ 8 };
	const int Reserve_Space_Mul{ 8 };

};