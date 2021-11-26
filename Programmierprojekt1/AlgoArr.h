#pragma once

#include "DynArr.h"

/**
 * @brief Sum of Array
 *
 * @param dynamic_array
 * @return
 */
double sum(DynamicArray &dynamic_array);

/**
 * @brief Calculates Mean value
 *
 * @param dynamic_array
 * @return
 */
double mean(DynamicArray &dynamic_array);


/**
 * @brief Calculates Median
 *
 * @param dynamic_array
 * @return
 */
double median(DynamicArray &dynamic_array);

double variance(DynamicArray &dynamic_array);

double stddev(DynamicArray &dynamic_array);
