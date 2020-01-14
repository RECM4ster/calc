//
// Created by M4ster on 14.01.2020.
//

#include "logarytmNaturalny.h"
#include <iostream>
#include <cmath>

using namespace std;

int logarytmNaturalny() {

    int liczba;
    float logarytm;
    cout << "Podaj liczbe logarytmowana" << endl;
    cin >> liczba;
    logarytm = log(liczba);
    cout << "Logarytm naturalny z " << liczba << " to " << logarytm;
    return 0;
}