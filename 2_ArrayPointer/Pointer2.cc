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
    //Speicher wird nur freigegeben, es wird ABER nicht der zeiger auf den Speicher gelöscht was zu einem Problem werden kann
    //Pointer muss noch manuel gelöscht werden, da der mir der Speicher nun nicht mehr gehört

    // Speicher wird auch nach dem beenden des Programms frei gegeben


    return 0;
}
