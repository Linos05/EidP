#include <iostream>
#include <cmath>

int main() {

    //PI-Deklarieren
    double const pi = 4 * std::atan(1);

    //Variablendeklaration
    double r, ku, kf, kgo, kgv;
    int ausgabe = 0;

    //Eingabe
    std::cout << "Geben Sie einen Radius in Centimeter (cm) an\n" << std::endl << std::endl;
    std::cin >> r;

    //Verarbeitung
    //Kreisumfang (ku)
    ku = 2 * r * pi;

    //Kreisfläche (kf)
    kf = (r * r) * pi;

    //Kugeloberfläche (kgo)
    kgo = 4 * (r * r) * pi;

    //Kugelvolumen (kgv)
    kgv = (4.0 / 3.0) * (r * r * r) * pi;

    //Ausgabe erfassen
    std::cout << "Für die Ausgabe: \n" << std::endl;
    std::cout << "Kreisumfang, drücken Sie die 1 \n" << std::endl;
    std::cout << "Kreisfläche, drücken Sie die 2 \n"<< std::endl;
    std::cout << "Kugeloberfläche, drücken Sie die 3 \n" << std::endl;
    std::cout << "Kugelvolumen, drücken Sie die 4 \n" <<std::endl;
    
    //Variable der Ausgabe
    std::cin >> ausgabe;

    //Ausgabe
    switch (ausgabe) {
    case 1 :
        std::cout << "Der Kreisumfang beträgt: " << ku << " cm." << std::endl;
        break;
    case 2 :
        std::cout << "Die Kreisfläche beträgt: " << kf << " cm²" << std::endl;
        break;
    case 3 :
        std::cout << "Die Kugeloberfläche beträgt: " << kgo << " cm²" << std::endl;
        break;
    case 4 : 
        std::cout << "Das Kugelvolimen beträgt: " << kgv << " cm³" << std::endl;
        break;
    default:
        std::cout << "Falsche Eingabe!" << std::endl;
    }

    return 0;
}