#include <iostream>

int main() {
    double fahrenheit;

    std::cout << "Temperatur in Fahrenheit: ";
    std::cin >> fahrenheit;

    double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    std::cout << fahrenheit << " °F = " << celsius << " °C" << std::endl;

    return 0;
}