#include <iostream>

int main()
{
    bool is_prime = true;
    int input;
    std::cout << "Gib eine Zahl ein ";
    std::cin >> input;

    for (int i = 2; i < input; i++)
    {
        if (input % i == 0)
        {
            is_prime = false;
        }
    }

    if (is_prime)
    {
        std::cout << "Primzahl" << std::endl;
    }
    else
    {
        std::cout << "Keine Primzahl" << std::endl;
    }
    return 0;
}
