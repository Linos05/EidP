#include <iostream>

int main()
{
	//Variablendefinitonen
	char menu = 'x';
    bool programmende = false;
    int a, b, erg, rest; 
    // hier alle weiteren Variablen einfügen

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
		case 'a': // Ihre Implementation
        //Zuruecksetzen
        erg = 0;

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
             rest =a % 2;
             std::cout << a << " Rest " << a % 2 << " b " << b;
             erg = erg + rest * b;
             std::cout << " Zwischenergebnis: " << erg << std::endl;
              a = a / 2;
               b = b* 2;
          }

        //Ausgabe
        std::cout << " Endergebnis: " << erg << std::endl;
			break;
		case 'b': // Ihre Implementation
			break;
		case 'c': // Ihre Implementation
			break;
		case 'd': // Ihre Implementation
			break;
		case 'x': // Programmende
			programmende = true;
			break;
		default: std::cout << "Der eingegebene Wert " << menu << " ist nicht gueltig!" << std::endl;
			break;
		}// Ende switch
	} while (programmende == false);
	return 0;
}
