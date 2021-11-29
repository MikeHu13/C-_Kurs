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

int main()
{
    vector<double> my_vector(10, 5);
    print_double_vector(my_vector);

    std::fill(my_vector.begin(), my_vector.end(), 4.5);
    print_double_vector(my_vector);

    std::iota(my_vector.begin(), my_vector.end(), 2.0);
    print_double_vector(my_vector);

    std::vector<double>::iterator it = my_vector.begin();
    std::cout << *it << std::endl;

    ++it;
    *it = -(*it); // mit iberator kann auch der Wert geändert werden über *, const iterator kann den wert nicht ändern
    std::cout << *it << std::endl;

    return 0;
}
