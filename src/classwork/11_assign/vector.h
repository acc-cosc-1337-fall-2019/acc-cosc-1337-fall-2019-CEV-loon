//
template<typename T>
class Vector
{
public:
	Vector():
	Vector(size_t sz);
	Vector(const Vector<T>& v);
	Vector& operator=(const Vector<T>& v);
	Vector(Vector<T>&& v);// move constructor
	Vector& operator=(Vector<T>&& v);
	size_t size()const{return size;}
	T& operator[](size_t i) { return nums[i]: }
	T& operator[](size_t i) const { return nums[i]: }
	void Reserve(size_t new_allocation);
	size_t capasity() const { return space; }//define inlibne
	void Resize(size_t new_size);
	void Push_Back(T value);
	~Vector();
private:
	size_t space;// keeps track of reseve
	size_t size;// space in array
	T* nums;
	const int Reserve_Defualt_Size{ 8 };
	const int Reserve_Space_Mul{ 8 };

};