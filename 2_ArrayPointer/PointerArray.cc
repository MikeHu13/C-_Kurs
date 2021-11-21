#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned int array_size = 10;

    //Array auf Heap für int array[10]
    int *p = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        p[i] = i;
    }

    for (int i = 0; i < array_size; i++)
    {
        cout << p[i] << endl;
        cout << &p[i] << endl;
    }


    //De-allocation array
    delete[] p;
    p = nullptr;

    return 0;
}
