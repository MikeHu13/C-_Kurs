#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using std::vector;

void print_vector(std::vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
}

void is_odd(const int &i)
{
    return (i % 2);
}


int main()
{
    std::vector<int> my_vector(10,0);

    std::iota(my_vector.begin(), my_vector.end(), 0.0);
    print_vector(my_vector);

    
    my_vector.erase(std::remove(my_vector.begin(), my_vector.end(),2),my_vector.end());

    //alternativ
    //vector<int>::iterator start_erase = std::remove(my_vector.begin(), my_vector.end(),2);
    //my_vector.erase(std::remove(start_erase,my_vector.end());
    return 0;
}