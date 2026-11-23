#include <iostream>
using namespace std;

int main()
{
	//Variablendefinitonen
	char menu = 'x';
	bool programmende = false;
	// hier alle weiteren Variablen einfügen

	do
	{
		cout << "a - Bauernmultiplikation" << endl;
		cout << "b - Kreis / Kugel" << endl;
		cout << "c - Morsezeichen" << endl;
		cout << "d - Zweitgroesste Zahl ermitteln" << endl;
		cout << "x - Programm beenden...." << endl << endl;
		cout << "Ihre Wahl: ";
		cin >> menu;

		switch (menu)
		{
		case 'a': // Ihre Implementation
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
		default: cout << "Der eingegebene Wert " << menu << " ist nicht gueltig!" << endl;
			break;
		}// Ende switch
	} while (programmende == false);
	return 0;
}
