#include<string>
#include<vector>

/*
Write function prototype for function loop_vector_w_index with no parameters.

*/
void loop_vector_w_index();

/*
Write function prototype for function loop_vector_w_index with a vector of int pass by value parameter.

*/
void loop_vector_w_index(std::vector<int>nums);


/*
Write function prototype for function loop_vector_w_index with a vector of int pass by reference parameter.
*/
void loop_vector_w_index_ref(std::vector<int>& nums);

/*
Write function prototype for function loop_vector_w_index with a vector of int const pass by reference parameter.
*/
void loop_vector_w_index_ref(const std::vector<int>& nums);



void loop_vector_w_f_ranged( std::vector<int>& nums);

void loop_vector_w_f_ranged_ref_var(std::vector<int>& nums);