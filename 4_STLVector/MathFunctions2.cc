#include <iostream>
#include <math.h>
#include <vector>

using std::vector;

void fill_double_vector(std::vector<double> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] = i;
    }
}

void print_double_vector(std::vector<double> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
}

void double_vector_exp(std::vector<double> &vec)
{   
    for(auto &my_vec : vec)
    {
        my_vec = std::exp(my_vec);
    }
}

void double_vector_log(std::vector<double> &vec)
{   for (auto it1 = vec.begin(); it1 != vec.end(); ++it1)
    {
        *it1 = std::log(*it1);
    }
}


int main()
{
    vector<double> my_vector(4, 0);

    fill_double_vector(my_vector);
    print_double_vector(my_vector);

    double_vector_exp(my_vector);
    print_double_vector(my_vector);
    double_vector_log(my_vector);
    print_double_vector(my_vector);

    return 0;
}
