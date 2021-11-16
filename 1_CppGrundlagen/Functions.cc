#include <iostream>

int user_input()
{
    int number;
    std::cout << "Please enter a Number: ";
    std::cin >> number;

    return number;
}

bool is_even(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int my_number;
    my_number = user_input();
    bool check = is_even(my_number);
    std::cout << std::boolalpha << check << std::endl;


    return 0;
}
