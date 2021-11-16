#include <iostream>

unsigned int sum(unsigned int n)
{
    if (n > 1)
    {
        return n + sum(n - 1);
    }
    else
    {
        return n;
    }
}

int main()
{
    unsigned int n = 5;
    unsigned int n_sum = sum(n);

    std::cout << "n sum = " << n_sum << std::endl;

    return 0;
}
