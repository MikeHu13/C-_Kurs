#include <iostream>

int main()
{
    int input;
    std::cout << "Gib eine Zahl ein: ";
    std::cin >> input;

    if (input < 0)
    {
        input = -input;
    }

    std::cout << input << std::endl;

    return 0;
}
