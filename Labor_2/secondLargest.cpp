#include <iostream>

int main () {

    //Deklarieren der Variablen
    double z1, z2, z3, z4, z5, largest, secondLargest = 0;
    bool haveSecond;

    //Usereingabe
    std::cout << "Geben Sie fuenf Zahlen ein: ";
    std::cin >> z1 >> z2 >> z3 >> z4 >> z5;

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
        std::cout << "Alle Zahlen haben der gleichen Wert, draus folgt, dass es keine zweitgroesste Zahl gibt." << std::endl;
    }

    return 0;

}