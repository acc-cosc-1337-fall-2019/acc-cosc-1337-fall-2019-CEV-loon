//
class Vector
{
public:
	Vector():
	Vector(size_t sz);
	Vector(const Vector& v);
	Vector& operator=(const Vector& v);
	Vector(Vector&& v);// move constructor
	Vector& operator=(Vector&& v);
	size_t size()const{return size;}
	int& operator[](int i) { return nums[i]: }
	int& operator[](int i) const { return nums[i]: }
	void Reserve(size_t new_allocation);
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