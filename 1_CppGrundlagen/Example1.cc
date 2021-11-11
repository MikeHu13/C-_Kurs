#include <iostream>

int main()
{
    float seite1;
    float seite2;
    float umfang;
    float flaeche;


    std::cout << "Gib die erste Seite des Rechtecks ein: ";
    std::cin >> seite1;
    std::cout << "Gib die zweite Seite des Rechtecks ein: ";
    std::cin >> seite2;

    umfang = 2 * seite1 + 2 * seite2;
    flaeche = seite1 * seite2;

    std::cout << "Umfang: " << umfang << std::endl;
    std::cout << "Fläche: " << flaeche << std::endl;

    return 0;
}
