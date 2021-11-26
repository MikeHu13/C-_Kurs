#include <iostream>

#include "lib.h"

// Bei static wird der Speicher zur kompile Zeit reserviert
// Daher wird der Wert auch beim beenden der Funktion weiterhin gespeichert

static int data[10]{};

void function()
{
    static int data2[10]{};
    int data3[10]{};

    //std::cout << data[0] << std::endl;
    std::cout << data2[0] << std::endl;
    std::cout << data3[0] << std::endl;

    data[0] = -1;
    data2[0] = -1;
    data3[0] = -1;
}

// Static Funktionen können nicht außerhalb der lib. Datei verwendet werden, also auch nicht aus Main aufgerufen werden.
static void helper()
{
    static int data2[10]{};
    int data3[10]{};

    //std::cout << data[0] << std::endl;
    std::cout << data2[0] << std::endl;
    std::cout << data3[0] << std::endl;

    data[0] = -1;
    data2[0] = -1;
    data3[0] = -1;
}
