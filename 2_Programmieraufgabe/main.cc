#include "exercise.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// In eurem Programm bitte:
// your_main zu main ändern
int main()
{
    // Aufgabe 1
    const unsigned int length = 100;
    double *d;
    d = new double[length];

    for (int i = 0; i < length; i++)
    {
        d[i] = i;
    }

    cout << array_sum(d, length) << endl;
    ;

    // Aufgabe 2
    const unsigned int arr_length = 3;
    int arr_val = 5;
    int *array;

    array = array_constructor(arr_val, arr_length);
    cout << array[0] << array[1] << array[2] << endl;

    return 0;
}
