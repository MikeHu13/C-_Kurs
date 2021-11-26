#include <iostream>

#include "DynArr.h"

//size_t ist wie unsigned int nur dass es je nach betriebsystem die gräße 32 bit 64 bit usw. flexibel anpasst

DynamicArray create_dynamic_array(const double &value, const std::size_t &length)
{
    DynamicArray dynamic_array = {nullptr, 0};

    dynamic_array.m_length = length;
    dynamic_array.m_data = new double[length];
    for (std::size_t i = 0; i < length; i++)
    {
        dynamic_array.m_data[i] = value;
    }

    return dynamic_array;
}

void push_back(DynamicArray &dynamic_array, const int &value)
{
    double *temp = new double[dynamic_array.m_length + 1];
    for (std::size_t i = 0; i < dynamic_array.m_length; i++)
    {
        temp[i] = dynamic_array.m_data[i];
    }
    temp[dynamic_array.m_length] = value;
    dynamic_array.m_data = temp;
    dynamic_array.m_length++;

    delete[] temp;
    temp = nullptr;
}

void pop_back(DynamicArray &dynamic_array)
{
    double *temp = new double[dynamic_array.m_length - 1];
    for (std::size_t i = 0; i < dynamic_array.m_length - 1; i++)
    {
        temp[i] = dynamic_array.m_data[i];
    }
    dynamic_array.m_data = temp;
    dynamic_array.m_length--;

    delete[] temp;
    temp = nullptr;
}
