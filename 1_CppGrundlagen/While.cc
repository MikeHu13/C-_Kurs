#include <iostream>

int main()
{
    int var = 0;
    int input;

    while (var < 10)
    {
        std::cout << "Gib eine Zahl ein: ";
        std::cin >> input;

        var += input;
    }

    return 0;
}
