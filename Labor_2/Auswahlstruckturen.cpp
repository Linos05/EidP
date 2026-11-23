#include <iostream>
#include <cmath>

int main()
{
    //Variablendefinitionen
    char menu = 'x';
    bool programmende = false;
    // hier alle weiteren Variablen einfuegen

    //Bauernmultiplikation
    int a, b, erg, rest;

    //Kreis / Kugel
    const double pi = 4 * std::atan(1);
    double r, ku, kf, kgo, kgv;
    int ausgabe;

    do
    {
        std::cout << "a - Bauernmultiplikation" << std::endl;
        std::cout << "b - Kreis / Kugel" << std::endl;
        std::cout << "c - Morsezeichen" << std::endl;
        std::cout << "d - Zweitgroesste Zahl ermitteln" << std::endl;
        std::cout << "x - Programm beenden...." << std::endl << std::endl;
        std::cout << "Ihre Wahl: ";
        std::cin >> menu;

        switch (menu)
        {
        case 'a': // Bauernmultiplikation

            //Zuruecksetzen
            erg = 0;

            //Eingabe
            std::cout << "Russische Bauernmultiplikation" << std::endl << std::endl;
            std::cout << "In jedem Rechenschritt wird" << std::endl;
            std::cout << "der erste Faktor durch 2 dividiert." << std::endl;
            std::cout << "Geben Sie den ersten Faktor ein: ";
            std::cin >> a;
            std::cout << "Geben Sie den zweiten Faktor ein: ";
            std::cin >> b;

            // Verarbeitung / Berechnung
            while (0 < a)
            {
                rest = a % 2;
                std::cout << a << " Rest " << rest << " b " << b;
                erg = erg + rest * b;
                std::cout << " Zwischenergebnis: " << erg << std::endl;
                a = a / 2;
                b = b * 2;
            }

            //Ausgabe
            std::cout << " Endergebnis: " << erg << std::endl;
            break;

        case 'b': // Kreis / Kugel

            //Eingabe
            std::cout << "Geben Sie einen Radius in Centimeter (cm) an: ";
            std::cin >> r;

            //Verarbeitung
            ku  = 2 * r * pi;                       // Kreisumfang
            kf  = (r * r) * pi;                     // Kreisflaeche
            kgo = 4 * (r * r) * pi;                 // Kugeloberflaeche
            kgv = (4.0 / 3.0) * (r * r * r) * pi;   // Kugelvolumen

            //Auswahl der Ausgabe
            std::cout << "Fuer die Ausgabe:" << std::endl;
            std::cout << "1 - Kreisumfang" << std::endl;
            std::cout << "2 - Kreisflaeche" << std::endl;
            std::cout << "3 - Kugeloberflaeche" << std::endl;
            std::cout << "4 - Kugelvolumen" << std::endl;
            std::cin >> ausgabe;

            //Ausgabe
            switch (ausgabe)
            {
            case 1:
                std::cout << "Der Kreisumfang betraegt: " << ku << " cm." << std::endl;
                break;
            case 2:
                std::cout << "Die Kreisflaeche betraegt: " << kf << " cm^2" << std::endl;
                break;
            case 3:
                std::cout << "Die Kugeloberflaeche betraegt: " << kgo << " cm^2" << std::endl;
                break;
            case 4:
                std::cout << "Das Kugelvolumen betraegt: " << kgv << " cm^3" << std::endl;
                break;
            default:
                std::cout << "Falsche Eingabe!" << std::endl;
                break;
            }
            break;

        case 'c': // Morsezeichen
            break;

        case 'd': // Zweitgroesste Zahl
            break;

        case 'x': // Programmende
            programmende = true;
            break;

        default:
            std::cout << "Der eingegebene Wert " << menu << " ist nicht gueltig!" << std::endl;
            break;
        } // Ende switch
    } while (programmende == false);

    return 0;
}