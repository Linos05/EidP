#include <iostream>
#include <cmath>

int main()
{
    //PI-Deklarieren
    double const pi = 4 * std::atan(1);

    //Variablendeklaration
    double r, ku, kf, kgo, kgv;
    int ausgabe;

    //Eingabe
    std::cout << "Geben Sie einen Radius in Centimeter (cm) an" << std::endl << std::endl;
    std::cin >> r;

    //Verarbeitung
    //Kreisumfang (ku)
    ku = 2 * r * pi;

    //Kreisfläche (kf)
    kf = (r * r) * pi;

    //Kugeloberfläche (kgo)
    kgo = 4 * (r * r) * pi;

    //Kugelvolumen (kgv)
    kgv = (4 / 6) * (r * r * r) * pi;

    //Ausgabe
    std::cout << "Für die Ausgabe: " << std::endl << std::endl;
    std::cout << "Kreisumfang, drücken Sie die 1" << std::endl << std::endl;
    std::cout << "Kreisfläche, drücken Sie die 2" << std:: endl << std::endl;
    std::cout << "Kugeloberfläche, drücken Sie die 3" <<std:: endl << std::endl;
    std::cout << "Kugelvolumen, drücken Sie die 4" <<std:: endl <<std::endl;
    
    std::cin >> ausgabe;

    if (ausgabe == 1) {
        std::cout << "Der Kreisumfang beträgt: " + ku + "cm." << std::endl;
    } else if (ausgabe == 2) {
        std::cout << "Die Kreisfläche beträgt: " + kf + "cm²" << std::endl;
    } else if (ausgabe == 3) {
        std::cout << "Die Kugeloberfläche beträgt: " + kgo + "cm²" std::endl;
    } else if (ausgabe == 4) {
        std::cout << "Das Kugelvolimen beträgt: " + kgv + "cm³" std::endl;
    } else {
        std::cout << "Falsche Eingabe!" << std::endl;
    }



    
    return 0;
}