#include <iostream>

// Ergebnis/Returnwert wird schon zur kompilierung berechnet und gespeichert
constexpr int faculty(int n)
{
    if (n > 1)
    {
        return n * faculty(n - 1);
    }
    else
    {
        return n;
    }
}

int main()
{
    int l = faculty(3);

    int a[faculty(3)];

    return 0;
}
