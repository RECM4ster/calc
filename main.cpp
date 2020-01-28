
#include <iostream>
#include "onp.h"
#include "liczbaOdwrotna.h"
#include "liczbaPrzeciwna.h"
#include "logarytmDziesietny.h"
#include "logarytmNaturalny.h"
#include "logarytmODowolnejPodstawie.h"
#include "funkcjeTrygonometryczne.h"
#include "silnia.h"

using namespace std;

int main() {
    int dzialanie;

    cout << "Jaki rodzaj dzialania chcesz wykonac" << endl;
    cout << "1. Dzialanie ONP" << endl;
    cout << "2. Odwrocenie liczby" << endl;
    cout << "3. Liczba przeciwna" << endl;
    cout << "4. Logarytm dziesietny" << endl;
    cout << "5. Logarytm Naturalny" << endl;
    cout << "6. Logarytm o dowolnej podstawie" << endl;
    cout << "7. Funkcje trygonometryczne" << endl;
    cout << "8. Silnia" << endl;
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
            funkcjeTrygonometryczne();
            break;

        case 8:
            silnia();
            break;
    }

}
