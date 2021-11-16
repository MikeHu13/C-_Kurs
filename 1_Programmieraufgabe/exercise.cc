// Hier die benötigten Includes und using Befehle
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Hier die Definition der Funktion
void mod_cross_sum(int I, int J)
{
    int sum;
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            sum = i + j;
            if (sum % 2 == 0)
            {
                cout << "i: " << i << " j: " << j << " := Gerade!" << endl;
            }
            else
            {
                cout << "i: " << i << " j: " << j << " := Ungerade!" << endl;
            }
        }
    }
}
