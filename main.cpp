

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void onp() {
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
}

void liczbaOdwrotna() {
    int liczba;
    cout << "Podaj liczbe do odwrocenia" << endl;
    cin >> liczba;
    cout << endl << "Liczba odworcona to 1/" << liczba << endl;


}

void liczbaPrzeciwna() {
    int liczba;
    cout << "Podaj liczbe by poznac jej liczbe przeciwna" << endl;
    cin >> liczba;
    cout << "Przeciwnosc tej liczby to " << liczba * -1 << endl;
}


void logarytmDziesietny() {
    int liczba;
    float logarytm;
    cout << "Podaj log dziesietny do obliczenia" << endl;
    cin >> liczba;
    logarytm = log10(liczba);
    cout << "Logarytm dziesietny z " << liczba << " to " << logarytm;

}

void logarytmNaturalny() {

    int liczba;
    float logarytm;
    cout << "Podaj liczbe logarytmowana" << endl;
    cin >> liczba;
    logarytm = log(liczba);
    cout << "Logarytm naturalny z " << liczba << " to " << logarytm;

}

void logarytmODowolnejPodstawie() {
    int podstawa, liczba, wynik;
    cout << "Podaj podstawe logarytmu" << endl;
    cin >> podstawa;
    cout << "Podaj liczbe logarytmowana" << endl;
    cin >> liczba;
    wynik = log(podstawa) / log(liczba);
    cout << "wynik dzialania to" << liczba << endl;

}

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

void silnia() {
    int liczba;
    int wynik = 1;

    cout << "Podaj n!" << endl;
    cin >> liczba;
    for (int i = 1; i <= liczba; i++)
        wynik *= i;

    cout << "Silnia z " << liczba << " wynosi " << wynik << endl;
}

int main() {
    int dzialanie;

    cout << "Jaki rodzaj dzialania chcesz wykonac" << endl;
    cout << "1. Dzialanie ONP" << endl;
    cout << "2. Odwrocenie liczby" << endl;
    cout << "3. Liczba przeciwna" << endl;
    cout << "4. Logarytm dziesietny" << endl;
    cout << "5. Logarytm Naturalny" << endl;
    cout << "6. Logarytm o dowolnej podstawie" << endl;
    cout << "7. Sinus Kata" << endl;
    cout << "8. Cosinus Kata" << endl;
    cout << "9. Tangens Kata" << endl;
    cout << "10. Silnia" << endl;
    cin >> dzialanie;


    switch (dzialanie) {
        case 1:
            onp();
            break;

        case 2:
            liczbaOdwrotna();
            break;

        case 3:
            liczbaPrzeciwna();
            break;

        case 4:
            logarytmDziesietny();
            break;

        case 5:
            logarytmNaturalny();
            break;

        case 6:
            logarytmODowolnejPodstawie();
            break;

        case 7:
            sinusKata();
            break;

        case 8:
            cosinusKata();
            break;

        case 9:
            tangensKata();
            break;

        case 10:
            silnia();
            break;
    }


}
