//
// Created by M4ster on 14.01.2020.
//
#include <iostream>
#include "silnia.h"

using  namespace std;

int silnia() {
    int liczba;
    int wynik = 1;

    cout << "Podaj n!" << endl;
    cin >> liczba;
    for (int i = 1; i <= liczba; i++)
        wynik *= i;

    cout << "Silnia z " << liczba << " wynosi " << wynik << endl;

    return 0;
}