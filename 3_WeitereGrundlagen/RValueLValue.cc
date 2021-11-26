#include <iostream>

void f(int &v)
{
    std::cout << v;
}

int main()
{
    int a = 3;        // LValue;
    const int b = 3;  //const LValue
    int &c = a;       //LValue Referenz
    const int &d = a; // const LValue Referenz

    f(a);
    f(b);
    f(c);
    f(d);

    f(3); // RValue

    return 0;
}
