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

bool my_sorting(const double &i, const double &j)
{
    return i > j;
}

int main()
{
    vector<double> my_vector(10, 0);

    std::iota(my_vector.begin(), my_vector.end(), 3.0);
    print_double_vector(my_vector);

    std::sort(my_vector.begin(), my_vector.end(), my_sorting);
    print_double_vector(my_vector);

    return 0;
}
