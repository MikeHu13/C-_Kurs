#include <iostream>

int main()
{
    int rounds;
    bool you_won = false;

    do
    {
        int input;
        std::cout << "Gib eine Zahl zwischen 0 und 10 ein: ";
        std::cin >> input;

        if (input <= 10 && input >= 0)
        {
            if (input == 4)
            {
                std::cout << "Du hast gewonnen" << std::endl;
                you_won = true;
            }
            else if (input % 2 == 0)
            {
                std::cout << "Du hast den Trostpreis gewonnen" << std::endl;
            }
            else
            {
                std::cout << "Du hast verloren" << std::endl;
            }
        }
        else
        {
            std::cout << "FALSE";
        }
    } while (you_won == false);


    return 0;
}
