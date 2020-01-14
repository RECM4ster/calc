//
// Created by M4ster on 14.01.2020.
//
#include <iostream>
#include <cmath>
#include "logarytmDziesietny.h"

using namespace std;

int logarytmDziesietny() {
    int liczba;
    float logarytm;
    cout << "Podaj log dziesietny do obliczenia" << endl;
    cin >> liczba;
    logarytm = log10(liczba);
    cout << "Logarytm dziesietny z " << liczba << " to " << logarytm;

    return 0;
}