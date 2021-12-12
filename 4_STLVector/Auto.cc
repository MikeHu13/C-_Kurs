#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using std::vector;

int main()
{
    vector<int> my_vector(10,0);
    std::iota(my_vector.begin(), my_vector.end(), 0);

    //ungünstig weil lange rausruck und man den typ noch mitgeben muss
    std::vector<int>::iterator it = my_vector.begin();

    //durch auto wird sich der passendste typ gesucht
    auto it2 = my_vector.begin();

    //(begin , end]
    for (auto it3 = my_vector.begin(); it3 != my_vector.end(); ++it3)
    {
        std::cout << *it3 <<std::endl;
    }
    
    auto a = 2;

    //For-each based loop
    // durch das &val wird eine Referenz erzeugt, welche auf den speicher von my_vector zeigt, spart speicher
    // ohne wir der der inhalt kopiert
    // Durch const kann der inhalt nicht verändert werden

    for(const auto &val:my_vector)
    {   
        std::cout << val << std::endl;
    }


    return 0;
}