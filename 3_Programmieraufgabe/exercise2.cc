#include <iostream>

#include "exercise2.h"


// Aufgabe 1
void push_back(int *&input_array, const unsigned int &size, const int &value)
{
    int *temp = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = input_array[i];
    }
    temp[size] = value;
    input_array = temp;

    delete[] temp;
    temp = nullptr;
}

// Aufgabe 2
void pop_back(int *&input_array, const unsigned int &size)
{
    int *temp = new int[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        temp[i] = input_array[i];
    }
    input_array = temp;

    delete[] temp;
    temp = nullptr;
}
