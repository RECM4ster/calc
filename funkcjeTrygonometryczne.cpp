//
// Created by M4ster on 14.01.2020.
//
#include <iostream>
#include <cstdlib>
#include <math.h>
#include "funkcjeTrygonometryczne.h"

using namespace std;

void sinusKata() {
    double liczba;
    cout << "Podaj miare konta w radianach" << endl;
    cin >> liczba;

    cout << "sinus tego kata wynosi " << sin(liczba);

}

void cosinusKata() {
    double liczba;
    cout << "Podaj miare konta w radianach" << endl;
    cin >> liczba;

    cout << "cosinus tego kata wynosi " << cos(liczba);

}

void tangensKata() {
    double liczba;
    cout << "Podaj miare konta w radianach" << endl;
    cin >> liczba;

    cout << "tangens tego kata wynosi " << tan(liczba);

}

int funkcjeTrygonometryczne() {
    int poddzialanie = 0;
    cout << "Co chcesz wyliczyć" << endl;
    cout << "1. Sinus Kata" << endl;
    cout << "2. Cosinus Kata" << endl;
    cout << "3. Tangens Kata" << endl;
    cin >> poddzialanie;
    if (poddzialanie == 1)
        sinusKata();

    else if (poddzialanie == 2)
        cosinusKata();

    else if (poddzialanie == 3)
        tangensKata();

    else {
        cout << "Error" << endl;
        exit(1);

    }

    return 0;
}
