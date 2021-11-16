#include <iostream>

bool guess()
{
    int input;
    std::cout << "Gib eine Zahl zwischen 0 und 10 ein: ";
    std::cin >> input;

    if (input <= 10 && input >= 0)
    {
        if (input == 4)
        {
            std::cout << "Du hast gewonnen" << std::endl;
            return true;
        }
        else if (input % 2 == 0)
        {
            std::cout << "Du hast den Trostpreis gewonnen" << std::endl;
            return false;
        }
        else
        {
            std::cout << "Du hast verloren" << std::endl;
            return false;
        }
    }
    else
    {
        std::cout << "FALSE";
        return false;
    }
}

int main()
{
    bool you_won = false;

    do
    {
        you_won = guess();
    } while (you_won == false);


    return 0;
}
