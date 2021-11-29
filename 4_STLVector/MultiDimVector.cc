#include <iostream>
#include <vector>

using std::vector;

int main()
{
    const unsigned int rows = 3;
    const unsigned int cols = 2;
    //2D Array
    int arr[3][2] = {{0, 1}, {2, 3}, {4, 5}};

    //2v-vector (3x2) Matrix -> 3 Reihen 2 Spalten
    //                            NUM OF vector<int>     Value of vector<int>
    vector<vector<int>> my_vector(rows, vector<int>(cols, 0));

    for (int i = 0; i < my_vector.size(); i++)
    {
        //my_vector[i] --> Row_vector with 2 int values
        for (int j = 0; j < my_vector[i].size(); j++)
        {
            std::cout << my_vector[i][j] << std::endl;
        }
    }


    return 0;
}
