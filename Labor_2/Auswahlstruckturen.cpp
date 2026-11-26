#include <iostream>
#include <cmath>

int main() {
    //Variablendefinitionen
    char menu = 'x';
    bool programmende = false;
    //hier alle weiteren Variablen einfuegen

    //Bauernmultiplikation
    int a, b, erg, rest;

    //Kreis / Kugel
    const double pi = 4 * std::atan(1);
    double r, ku, kf, kgo, kgv;
    int ausgabe;

    //Morsezeichen
    char zeichen;

    //Zweitgroesste Zahl
    double z1, z2, z3, z4, z5, largest, secondLargest = 0;
    bool haveSecond = false;

    do {
        std::cout << "a - Bauernmultiplikation" << std::endl;
        std::cout << "b - Kreis / Kugel" << std::endl;
        std::cout << "c - Morsezeichen" << std::endl;
        std::cout << "d - Zweitgroesste Zahl ermitteln" << std::endl;
        std::cout << "x - Programm beenden...." << std::endl << std::endl;
        std::cout << "Ihre Wahl: ";
        std::cin >> menu;
        if (std::cin.fail()) {
            std::cin.clear();
            menu = '?';
        }
        std::cin.ignore(10000, '\n');
        switch (menu) {
        case 'a': //Bauernmultiplikation

            //Zuruecksetzen
            erg = 0;

            //Eingabe
            std::cout << "Russische Bauernmultiplikation" << std::endl << std::endl;
            std::cout << "In jedem Rechenschritt wird" << std::endl;
            std::cout << "der erste Faktor durch 2 dividiert." << std::endl;
            std::cout << "Geben Sie den ersten Faktor ein: ";
            std::cin >> a;
            if (std::cin.fail()) {
                std::cin.clear();                        // Fehlerzustand zuruecksetzen
                std::cin.ignore(10000, '\n');            // falsche Eingabe verwerfen
                std::cout << "Ungueltige Eingabe!" << std::endl;
                break;                                   // zurueck zum Menue
            }
            std::cin.ignore(10000, '\n');

            std::cout << "Geben Sie den zweiten Faktor ein: ";
            std::cin >> b;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Ungueltige Eingabe!" << std::endl;
                break;
            }
            std::cin.ignore(10000, '\n');

            //Verarbeitung / Berechnung
            while (0 < a) {
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

        case 'b': //Kreis / Kugel

            //Eingabe
            std::cout << "Geben Sie einen Radius in Centimeter (cm) an: ";
            std::cin >> r;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Ungueltige Eingabe!" << std::endl;
                break;
            }
            std::cin.ignore(10000, '\n');

            //Verarbeitung
            ku  = 2 * r * pi;                       //Kreisumfang
            kf  = (r * r) * pi;                     //Kreisflaeche
            kgo = 4 * (r * r) * pi;                 //Kugeloberflaeche
            kgv = (4.0 / 3.0) * (r * r * r) * pi;   //Kugelvolumen

            //Auswahl der Ausgabe
            std::cout << "Fuer die Ausgabe:" << std::endl;
            std::cout << "1 - Kreisumfang" << std::endl;
            std::cout << "2 - Kreisflaeche" << std::endl;
            std::cout << "3 - Kugeloberflaeche" << std::endl;
            std::cout << "4 - Kugelvolumen" << std::endl;
            std::cin >> ausgabe;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Ungueltige Eingabe!" << std::endl;
                break;
            }
            std::cin.ignore(10000, '\n');

            //Ausgabe
            switch (ausgabe) {
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

        case 'c': //Morsezeichen

            //Eingabe
            std::cout << "Geben Sie einen Buchstaben, eine Ziffer oder ein Satzzeichen ein: ";
            std::cin >> zeichen;
            std::cin.ignore(10000, '\n');

            //Ausgabe
            std::cout << "Morsecode: ";
            switch (zeichen) {
            //Buchstaben
            case 'a': case 'A': std::cout << ".-";   break;
            case 'b': case 'B': std::cout << "-..."; break;
            case 'c': case 'C': std::cout << "-.-."; break;
            case 'd': case 'D': std::cout << "-..";  break;
            case 'e': case 'E': std::cout << ".";    break;
            case 'f': case 'F': std::cout << "..-."; break;
            case 'g': case 'G': std::cout << "--.";  break;
            case 'h': case 'H': std::cout << "...."; break;
            case 'i': case 'I': std::cout << "..";   break;
            case 'j': case 'J': std::cout << ".---"; break;
            case 'k': case 'K': std::cout << "-.-";  break;
            case 'l': case 'L': std::cout << ".-.."; break;
            case 'm': case 'M': std::cout << "--";   break;
            case 'n': case 'N': std::cout << "-.";   break;
            case 'o': case 'O': std::cout << "---";  break;
            case 'p': case 'P': std::cout << ".--."; break;
            case 'q': case 'Q': std::cout << "--.-"; break;
            case 'r': case 'R': std::cout << ".-.";  break;
            case 's': case 'S': std::cout << "...";  break;
            case 't': case 'T': std::cout << "-";    break;
            case 'u': case 'U': std::cout << "..-";  break;
            case 'v': case 'V': std::cout << "...-"; break;
            case 'w': case 'W': std::cout << ".--";  break;
            case 'x': case 'X': std::cout << "-..-"; break;
            case 'y': case 'Y': std::cout << "-.--"; break;
            case 'z': case 'Z': std::cout << "--.."; break;

            //Ziffern
            case '0': std::cout << "-----"; break;
            case '1': std::cout << ".----"; break;
            case '2': std::cout << "..---"; break;
            case '3': std::cout << "...--"; break;
            case '4': std::cout << "....-"; break;
            case '5': std::cout << "....."; break;
            case '6': std::cout << "-...."; break;
            case '7': std::cout << "--..."; break;
            case '8': std::cout << "---.."; break;
            case '9': std::cout << "----."; break;

            //Satzzeichen
            case '.':  std::cout << ".-.-.-";  break;
            case ',':  std::cout << "--..--";  break;
            case '?':  std::cout << "..--.."; break;
            case '\'': std::cout << ".----.";  break;
            case '!':  std::cout << "-.-.--";  break;
            case '/':  std::cout << "-..-.";   break;
            case '(':  std::cout << "-.--.";   break;
            case ')':  std::cout << "-.--.-";  break;
            case '&':  std::cout << ".-...";   break;
            case ':':  std::cout << "---...";  break;
            case ';':  std::cout << "-.-.-.";  break;
            case '=':  std::cout << "-...-";   break;
            case '+':  std::cout << ".-.-.";   break;
            case '-':  std::cout << "-....-";  break;
            case '_':  std::cout << "..--.-";  break;
            case '"':  std::cout << ".-..-.";  break;
            case '$':  std::cout << "...-..-"; break;
            case '@':  std::cout << ".--.-.";  break;

            //Unbekanntes Zeichen
            default:
                std::cout << "........";
                break;
            }
            std::cout << std::endl;
            break;

        case 'd': //Zweitgroesste Zahl

            //Usereingabe
            std::cout << "Geben Sie fuenf Zahlen, mit einem Leerzeichen zwischen jeder ein: ";
            std::cin >> z1 >> z2 >> z3 >> z4 >> z5;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Ungueltige Eingabe!" << std::endl;
                break;
            }
            std::cin.ignore(10000, '\n');

            //Pruefen der ersten beiden Variablen
            if (z1 > z2) {
                largest = z1;
                secondLargest = z2;
                haveSecond = true;
            }
            else if (z2 > z1) {
                largest = z2;
                secondLargest = z1;
                haveSecond = true;
            }
            else {
                largest = z1;
                haveSecond = false;
            }

            //Pruefen der dritten Variable
            if (z3 > largest) {
                secondLargest = largest;
                largest = z3;
                haveSecond = true;
            }
            else if (z3 < largest && (!haveSecond or (z3 > secondLargest))) {
                secondLargest = z3;
                haveSecond = true;
            }

            //Pruefen der vierten Variable
            if (z4 > largest) {
                secondLargest = largest;
                largest = z4;
                haveSecond = true;
            }
            else if (z4 < largest && (!haveSecond or (z4 > secondLargest))) {
                secondLargest = z4;
                haveSecond = true;
            }

            //Pruefen der fuenften Variable
            if (z5 > largest) {
                secondLargest = largest;
                largest = z5;
                haveSecond = true;
            }
            else if (z5 < largest && (!haveSecond or (z5 > secondLargest))) {
                secondLargest = z5;
                haveSecond = true;
            }

            //Wenn es eine zweitgroesste gibt Printen
            if (haveSecond) {
                std::cout << "Die zweitgroesste Zahl ist: " << secondLargest << std::endl;
            }
            else {
                std::cout << "Alle Zahlen haben den gleichen Wert, draus folgt, dass es keine zweitgroesste Zahl gibt." << std::endl;
            }
            break;

        case 'x': //Programmende
            programmende = true;
            break;

        default:
            std::cout << "Der eingegebene Wert " << menu << " ist nicht gueltig!" << std::endl;
            break;
        } //Ende switch
    } while (programmende == false);

    return 0;
}