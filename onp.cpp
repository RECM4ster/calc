//
// Created by M4ster on 14.01.2020.
//
#include <iostream>
#include "onp.h"

using namespace std;

int onp() {
    int stos[256], wskaznik_stosu = 0; //zmienna stosu i wskaznik stosu
    int a, b, w; //zmienne obliczeniowe
    char elementy_stosu[256];// tablica przechowujaca nasze dzialanie

    cout << "Podaj dzialanie w postaci ONP(zakonczone =):";
    cin >> elementy_stosu; //wprowadzanie dzialania
    int i = -1; //zmienna sterujaca
    do {
        i++; //co jeden przebieg zwiekszy nam o 2

        if (elementy_stosu[i] >= '0' &&
            elementy_stosu[i] <= '9') //sprawdza czy elemnet dzialania o ideksie i jest liczba
        {
            a = b = 0;
            a = elementy_stosu[i] - 48; // zamiana znaku  na liczbe
            stos[wskaznik_stosu++] = a; // dodanie liczby do stosu

        } else if (elementy_stosu[i] == '=') cout << "wynik:" << stos[--wskaznik_stosu] << endl; //wyswietlamy wynik
        else {
            b = stos[--wskaznik_stosu];
            a = stos[--wskaznik_stosu]; //pobieramy dwie liczby do obliczen z stosu

            switch (elementy_stosu[i]) //sprawdzamu znak
            {
                case '+':
                    w = a + b;
                    break;
                case '-':
                    w = a - b;
                    break;
                case '*':
                    w = a * b;
                    break;
                case '/':
                    w = a / b;
                    break;
                case '^':
                    w = 1;
                    while (b--) w *= a;
                    break;
            }

            stos[wskaznik_stosu++] = w;// dodaje do stosu wynik operacji
        }

    } while (elementy_stosu[i] != '=');
    return 0;
}