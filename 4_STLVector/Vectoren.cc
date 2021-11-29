#include <iostream>
#include <vector>

using std::vector;

//by default use Vector when you need a container
int main()
{
    // int* data = new ...;
    // Vector mit Länge 2 und Default wert = $""
    vector<int> my_vector(2, 42);

    std::cout << my_vector[0] << std::endl;
    std::cout << my_vector[1] << std::endl;

    my_vector[0] = 10;
    my_vector[1] = 12;

    std::cout << my_vector[0] << std::endl;
    std::cout << my_vector[1] << std::endl;
    //std::cout << my_vector[2] << std::endl;

    //at
    std::cout << my_vector.at(0) << std::endl;
    std::cout << my_vector.at(1) << std::endl;
    //std::cout << my_vector.at(2) << std::endl; // Hier bricht der Compiler ab, da es den Wert nicht gibt

    //push_back
    my_vector.push_back(24);
    std::cout << my_vector.at(2) << std::endl;

    //size
    for (int i = 0; i < my_vector.size(); i++)
    {
        std::cout << my_vector[i] << std::endl;
    }

    // pop_back
    my_vector.pop_back();

    // data
    int *arr = my_vector.data();

    return 0;
}
