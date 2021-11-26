#include <iomanip>
#include <iostream>

// 1a C++: static cast<> - converts objects from one type tp antother
// 1b. C: (new type)(varName)
// Einfacher zu lese, weniger Fehleranfällig

int main()
{
    double number = 3.14;
    std::cout << std::setprecision(30) << number << std::endl;

    int number2 = number;
    std::cout << number2 << std::endl;

    //C-casting
    //(newType)(varName)
    float number3 = (float)(number);
    std::cout << std::setprecision(30) << number3 << std::endl;

    double number4 = (double)(number3);
    std::cout << std::setprecision(30) << number4 << std::endl;

    //c++ casting
    //static cast<>
    float number5 = static_cast<float>(number);
    std::cout << std::setprecision(30) << number5 << std::endl;

    double number6 = static_cast<double>(number5);
    std::cout << std::setprecision(30) << number6 << std::endl;

    int number7 = 133700;
    std::cout << number7 << std::endl;
    char number8 = static_cast<char>(number7);
    std::cout << static_cast<int>(number8) << std::endl;


    return 0;
}
