#include <iostream>

int main()
{
    // {} initialisiert alle Werte mit 0
    //float vector1[3]{}; Diese Schreibweise ist moderner
    float vector1[3] = {};
    float vector2[3] = {};

    std::cout << "Gibt Werte für Vector 1 ein: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> vector1[i];
    }

    std::cout << "Gibt Werte für Vector 2 ein: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> vector2[i];
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << vector1[i] + vector2[i] << std::endl;
    }


    return 0;
}
