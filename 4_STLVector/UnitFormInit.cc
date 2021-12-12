#include <iostream>

int main()
{
    auto i = 3.5;
    auto j = static_cast<int>(i);

    auto k = double{0.0F};
    auto l{0.0F}; // durch F in der Klammer wird direkt ein float draus
    auto m{0};
    auto n{0U};
    auto o{0L};

    auto p = int{1}; // Neue Schreibweise mit den geschweiften Klammer anstatt Runde Klammern, das führt sp zu einem Fehler bei normalen wäre das kein Fehler
    int q{1};

    std::cout << i << j << k << l << m<< n<< o <<p <<q <<std::endl;


    return 0;
}