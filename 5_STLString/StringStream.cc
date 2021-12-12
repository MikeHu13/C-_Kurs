#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string birthday;
    unsigned int day, month, year;

    std::cout << "Please enter yout Birthday (DD.MM.YYYY): ";
    std::cin >> birthday;

    std::stringstream birthday_ss(birthday);
    char c;

    birthday_ss >> day >> c >> month >> c >> year;

    std::cout << "Your Brithday: " << day << "." << month << "." << year << std::endl;

    return 0;
}
