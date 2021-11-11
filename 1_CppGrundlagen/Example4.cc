#include <iostream>

int main()
{
    int year;
    std::cout << "Gib eine Jahr ein: ";
    std::cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                std::cout << "Schaltjahr" << std::endl;
            }
            else
            {
                std::cout << "Leider kein Schaltjahr" << std::endl;
            }
        }
        else
        {
            std::cout << "Schaltjahr" << std::endl;
        }
    }
    else
    {
        std::cout << "Leider kein Schaltjahr" << std::endl;
    }

    return 0;
}
