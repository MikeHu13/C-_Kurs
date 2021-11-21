#include <iostream>

// Call by Value
void f1(int number)
{
    number++;
}

// Call by Refernce
void f2(int &number)
{
    number++;
}

// Call by Value
int f3(int number)
{
    return ++number;
}

int main()
{
    int num = 0;
    std::cout << num << std::endl;

    f1(num);
    std::cout << num << std::endl;

    f2(num);
    std::cout << num << std::endl;

    num = f3(num);
    std::cout << num << std::endl;

    return 0;
}
