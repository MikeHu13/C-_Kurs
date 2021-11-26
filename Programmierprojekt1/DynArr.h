#pragma once

#include <cstddef>

/**
 * @brief Dynamicm Array Structure
 *
 * @param std::size_t m_length
 */
struct DynamicArray
{
    double *m_data;
    std::size_t m_length;
};
/**
 * @brief Create a dynamic array object
 *
 * @param value
 * @param length
 * @return
 */
DynamicArray create_dynamic_array(const double &value, const std::size_t &length);

/**
 * @brief Push Back the Value at the end of the vector
 *
 * @param input_array input pointer to an int array
 * @param size The size of the array
 * @param value The value to append the array
 */
void push_back(DynamicArray &dynamic_array, const int &value);


/**
 * @brief Pop Back the value at the end of the vector
 *
 * @param input_array input pointer to an int array
 * @param size The size of the array
 */
void pop_back(DynamicArray &dynamicArray);
