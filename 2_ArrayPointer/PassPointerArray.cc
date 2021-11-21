#include <iostream>
using std::cout;
using std::endl;

// int* input_array = int input_array[]
int array_max(int *input_array, unsigned int length)
{
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            max = input_array[i];
        }
        else if (input_array[i] > max)
        {
            max = input_array[i];
        }
    }
    return max;
}

int main()
{
    unsigned int array_size = 10;

    //Array auf Heap für int array[10]
    int *p = new int[array_size];

    //Size of the pointer
    cout << sizeof(p) << endl;
    //Size of the first array element
    cout << sizeof(*p) << endl;

    for (int i = 0; i < array_size; i++)
    {
        p[i] = i;
    }

    cout << array_max(p, array_size) << endl;


    //De-allocation array
    delete[] p;
    p = nullptr;

    return 0;
}
