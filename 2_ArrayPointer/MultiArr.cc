#include <iostream>

int main()
{
    int my_arr1[3] = {1, 2, 3};

    //Rows = 3
    //Colums = 2
    int my_arr2[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << my_arr2[i][j] << std::endl;
        }
    }

    return 0;
}
