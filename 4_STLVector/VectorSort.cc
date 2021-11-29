#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using std::vector;

void print_double_vector(std::vector<double> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
}

bool my_descending(const double &i, const double &j)
{
    return i > j;
}

bool my_ascending(const double &i, const double &j)
{
    return i < j;
}



int main()
{
    vector<double> my_vector(10, 0);

    std::iota(my_vector.begin(), my_vector.end(), 3.0);
    print_double_vector(my_vector);

    std::sort(my_vector.begin(), my_vector.end() - 2, my_descending);
    print_double_vector(my_vector);

    std::sort(my_vector.begin(), my_vector.end() - 2, my_ascending);
    print_double_vector(my_vector);

    //ascening is default
    std::sort(my_vector.begin(), my_vector.end() - 2, my_ascending);
    print_double_vector(my_vector);


    return 0;
}
