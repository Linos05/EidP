#include <iostream>
#include <cmath>

int main()
{
    //PI-Deklarieren
    double const pi = 4 * std::atan(1);

    //Variablendeklaration
    double r, ku, kf, kgo, kgv;

    //Eingabe
    std::cout << "Geben Sie einen Radius an" << std::endl << std::endl;
    std::cin >> r;

    //Verarbeitung
    //Kreisumfang (ku)
    ku = 2 * r * pi;

    //Kreisfläche (kf)
    kf = (r * r) pi;

    //Kugeloberfläche (kgo)
    kgo = 4 * (r * r) * pi;

    //Kugelvolumen (kgv)
    kgv = (4 / 6) * (r * r * r) * pi;


    
    return 0;
}