#include <iostream>

int main()
{
    double number1 = 10.0;
    double number2 = 2.0;
    double result = 0.0;

    result = number1 * number2;
    std::cout << "number1 * number2 = " << result << std::endl;

    //Char nur in einzelnen ''
    char my_char = 'A';
    char offset = 2;

    std::cout << my_char + offset << std::endl;

    //Aufpassen beim rechnen mit Datentypen
    int number3 = 1;
    double number4 = 2.5f;
    double result2 = number3 * number4;

    std::cout << result2 << std::endl;


    return 0;
}
