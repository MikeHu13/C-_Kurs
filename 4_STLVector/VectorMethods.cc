#include <iostream>
#include <vector>
using std::vector;


int main()
{
    vector<float> my_vector;


    for (int i = 0; i < 13; i++)
    {
        my_vector.push_back(i);
        std::cout << my_vector[i] << std::endl;
    }

    my_vector.clear();         //Vector leeren
    my_vector.shrink_to_fit(); // Lässt kapazität auf die gleiche größe wie die eignetliche size schrumpfen
    std::cout << my_vector.size() << std::endl;
    std::cout << my_vector.capacity() << std::endl;

    for (int i = 0; i < my_vector.size(); i++)
    {
        my_vector.push_back(i);
        std::cout << my_vector[i] << std::endl;
    }

    my_vector.resize(3); // behält nur noch die ersten 3 elemente
    for (int i = 0; i < my_vector.size(); i++)
    {
        std::cout << my_vector[i] << std::endl;
    }

    std::cout << my_vector.empty() << std::endl; // 1 wenn keine elemente gespeichert sind

    return 0;
}
