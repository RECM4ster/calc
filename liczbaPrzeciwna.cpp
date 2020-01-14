//
// Created by M4ster on 14.01.2020.
//
#include <iostream>
#include "liczbaPrzeciwna.h"

using namespace std;

int liczbaPrzeciwna() {
    int liczba;
    cout << "Podaj liczbe by poznac jej liczbe przeciwna" << endl;
    cin >> liczba;
    cout << "Przeciwnosc tej liczby to " << liczba * -1 << endl;

    return 0;
}