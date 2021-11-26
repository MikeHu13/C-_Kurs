#include "exercise.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

namespace computation
{
// Aufgabe 1
double mean_array_value(int *array, const unsigned int &length)
{
    double mean_val = 0.0;
    for (int i = 0; i < length; i++)
    {
        mean_val += array[i];
    }

    return mean_val / length;
}
double mean_array_value(double *array, const unsigned int &length)
{
    double mean_val = 0.0;

    for (int i = 0; i < length; i++)
    {
        mean_val += array[i];
    }

    return mean_val / length;
}
} // namespace computation
