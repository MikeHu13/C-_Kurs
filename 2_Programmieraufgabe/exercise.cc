// Aufgabe 1
double array_sum(double *p_array, const unsigned int &length)
{
    double sum = 0.0;
    for (int i = 0; i < length; i++)
    {
        sum += p_array[i];
    }
    return sum;
}

// Aufgabe 2
int *array_constructor(const int &value, const unsigned int &length)
{
    int *p = new int[length];
    for (int i = 0; i < length; i++)
    {
        p[i] = value;
    }
    return p;
}
