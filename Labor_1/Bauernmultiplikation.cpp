#include <iostream>

int main()
{
    //Variablendeklaratrion
    int a, b, erg = 0;
    int rest;

    //Eingabe
    std::cout << "Russische Bauernmultiplikation" << std::endl << std::endl;
    std::cout << "In jedem Rechenschritt wird..." << std::endl;
    std::cout << "der esrte Faktor durch 2 dividiert." << std::endl;
    std::cout << "Geben Sie den ersten Faktor ein: ";
    std::cin >> a;
    std::cout << "Geben Sie den zweiten Faktor ein: ";
    std::cin >> b;

    // Verarbeitung / Berechnung
    while ( 0 < a )
    {
        std::cout << a << " Rest " << a % 2 << " b " << b;
        std::cout << " Zwischenergebnis: " << erg << std::endl;
        a = a / 2;
        rest =a % 2;
        erg = erg + rest * b;
        b = b* 2;
    }

    //Ausgabe
    std::cout << " Endergebnis: " << erg << std::endl;

    return 0;
}