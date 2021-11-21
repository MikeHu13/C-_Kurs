#include <iostream>

void f(int *p_function)
{
    std::cout << "(FUNCTION: p_function: " << p_function << std::endl;
    std::cout << "(FUNCTION): &p_function: " << &p_function << std::endl;
}

int main()
{
    int *p_number = new int{4};
    std::cout << "(MAIN): p_number: " << p_number << std::endl;
    std::cout << "(MAIN): &p_number: " << &p_number << std::endl;

    // Hier Call by Value: Obwohl ein Pointer übergeben wird, wird hier die Adresse übergeben
    // Ich kann dadurch aus der Funktion den Wert von p_number ändern
    // In der Funktion selbst, wird aber ein neuer Pointer mit einer anderen Adresse angelegt
    f(p_number);

    return 0;
}
