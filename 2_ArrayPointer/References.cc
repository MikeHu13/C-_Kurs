#include <iostream>

// Call by Value
void f(int *p_function)
{
    std::cout << "(F): p_function: " << p_function << std::endl;
    std::cout << "(F): &p_function: " << &p_function << std::endl;
}


// Hier bleibt nicht nur der Wert des übergebenen Zeigers (Adresse von p_number)
// Sondern auch die Adresse des neuen Zeiger entspricht der Adresse des alten Zeigers
// Call by Refernce
void g(int *&p_function)
{
    std::cout << "(G): p_function: " << p_function << std::endl;
    std::cout << "(G): &p_function: " << &p_function << std::endl;
}

int main()
{
    int *p_number = new int{4};
    std::cout << "(MAIN): p_number: " << p_number << std::endl;
    std::cout << "(MAIN): &p_number: " << &p_number << std::endl;

    //Für kleine Variablen eher Call by Value
    // Refernce nur verwenden wenn größere Datentypen wie 8 Byte sonst ist der zusätzliche Pointer größer als die eigentliche Variable
    f(p_number);

    //Für große Objekte sollten eher Call by Reference verwendet werden
    g(p_number);
    return 0;
}
