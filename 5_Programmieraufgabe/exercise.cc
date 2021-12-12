#include <iostream>
#include <vector>
#include <algorithm>

#include "exercise.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::fill;
using std::sort;

// Aufgabe 2
vector<double> max_row_values(Matrix &matrix)
{
    vector<double> max_values (matrix.size(),0);
    for (size_t i = 0; i != matrix.size(); i++)
    {
        auto double_val = 0.0;

        for (size_t j = 0; j != matrix[i].size(); j++)
        {
            if (matrix[i][j] > double_val)
            {
                double_val = matrix[i][j];
            }
            
        }
        max_values[i] = double_val; 
    }
    return max_values;
}

// Aufgabe 3
double sort_and_max(vector<double> &vec)
{
    sort(vec.begin(), vec.end());

    return vec.back();   
}