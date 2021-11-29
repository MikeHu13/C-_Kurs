#include <iostream>
#include <vector>
using std::vector;


// Ab einer gewinssen größe allokiert die Klasse automatisch mehr speicher
// da es dann wahrscheinlich ist dass in zukunft der vector noch weiter wächst
// Daher wird so für die zukunft schon aufwand bzw rechenzeit gespart

int main()
{
    vector<float> my_vector;


    for (int i = 0; i < 10; i++)
    {
        my_vector.push_back(i);
    }

    std::cout << my_vector.size() << std::endl;     //the currently used size of the underlying pointer array
    std::cout << my_vector.capacity() << std::endl; // real size of the underlying pointer array


    return 0;
}
