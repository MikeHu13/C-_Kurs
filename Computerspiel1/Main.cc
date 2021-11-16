#include <iostream>
#include <stdlib.h>

#define LEN_X 10u
#define LEFT 'a'
#define RIGHT 'd'

int main()
{
    bool repeat = true;
    int playAgain;
    unsigned int playerPos = 0;
    char field[] = "P--------|";
    char direction;
    int goal = LEN_X - 1;

    while (repeat)
    {
        std::cout << field;
        while (playerPos < goal)
        {
            std::cin >> direction;

            if (direction == 'a')
            {
                if (playerPos > 0)
                {
                    playerPos--;
                    field[playerPos] = 'P';
                    field[playerPos + 1] = '-';
                    std::cout << "You moved Left" << std::endl;
                }
            }
            if (direction == 'd')
            {
                if (playerPos < goal)
                {
                    playerPos++;
                    field[playerPos] = 'P';
                    field[playerPos - 1] = '-';
                    std::cout << "You moved Right" << std::endl;
                }
            }
            std::cout << field;
        }
        std::cout << "You Won!" << std::endl;
        std::cout << "Play Again ? [0 - No; 1 - Yes]" << std::endl;
        std::cin >> playAgain;
        if (playAgain == 0)
        {
            repeat = false;
        }
    }

    return 0;
}
