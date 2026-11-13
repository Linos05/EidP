#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () {
    double fahrenheit, celsius;

    cout << "Bitte Temperatur in Grad Fahrenheit eingeben";
    cin >> fahrenheit;
    celsius = (fahrenheit -32) * 5 / 9;
    cout << fahrenheit << " Grad Fahrenheit entsprechen " << celsius << " Grad Celsius" << endl;


return 0;
}