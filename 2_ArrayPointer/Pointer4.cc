#include <iostream>

void print_pointer(int *p)
{
    std::cout << "Deref: " << *p << std::endl;
    std::cout << "Ref: " << p << std::endl;
    std::cout << "Pointer Address: " << &p << std::endl;
}

void print_double_pointer(double *p)
{
    std::cout << "Deref: " << *p << std::endl;
    std::cout << "Ref: " << p << std::endl;
    std::cout << "Pointer Address: " << &p << std::endl;
}

int main()
{
    int a = 1337;
    float b = -12.37;

    int *c = &a;
    print_pointer(c);

    *c -= 10;
    print_pointer(c);

    int *d = &a;
    print_pointer(d);

    *c += 10;
    print_pointer(d);

    // Problem, das sollte vermieden werden int zeiger auf Float ohne Fehlermeldung
    *c = b;
    print_pointer(c);

    return 0;
}
