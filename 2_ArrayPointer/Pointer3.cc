#include <iostream>

// & Reference
// * Dereference

int main()
{
    // Heap allocation
    // Pointer liegt auf dem Stack und zeigt auf den allokierten Speicher auf dem Heap
    // Man kann ohne Pointer nicht auf den Heapspeicher zugreifen
    int *p = new int;
    *p = 4;
    //int *p = new int{4};

    std::cout << "memory address of p: " << &p << std::endl;
    std::cout << "memory address of pointer value: " << p << std::endl;
    std::cout << "Value of the address p points to " << *p << std::endl;

    //Heap de-allocatoin
    delete p;

    std::cout << "memory address of pointer value: " << p << std::endl;

    //Dies löscht auch den Speicher der auf den Nicht mehr zugreifbaren Speicher zeigt
    // Würde man das nicht machen, kann ein anderes Programm auf den Speicher nach dem freigeben (delete)
    //zugreifen und den Wert ändern.. Wird dann der Pointer in meinem Programm weiter verwendet führt dies zu Probleme
    //p = NULL;   // ALT aber würde auch gehen
    p = nullptr; // Besser so in C++

    std::cout << "memory address of pointer value: " << p << std::endl;

    // Abfragen ob der Pointer noch auf den Speicherbereich zeigt
    if (p != nullptr)
    {
        std::cout << "Value of the address p points to " << *p << std::endl;
    }

    return 0;
}
