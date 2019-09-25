#include "vec.h"

int main() 
{
void	loop_vector_with_index();
		std::vector<int> nums = { 99,55,1,3,66 };

	loop_vector_with_index(nums);
	loop_vector_with_index_ref(nums);
	loop_vector_with_index_const(nums);
	loop_vector_w_f_ranged(nums);
	return 0;
}