//
// Created by M4ster on 14.01.2020.
//
#include <iostream>
#include <cmath>
#include "logarytmODowolnejPodstawie.h"

using namespace std;

int logarytmODowolnejPodstawie() {
    int podstawa, liczba, wynik;
    cout << "Podaj podstawe logarytmu" << endl;
    cin >> podstawa;
    cout << "Podaj liczbe logarytmowana" << endl;
    cin >> liczba;
    wynik = log(podstawa) / log(liczba);
    cout << "wynik dzialania to" << liczba << endl;
    return 0;
}