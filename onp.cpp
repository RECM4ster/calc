#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include <cstdlib>
using namespace std;

int main() {
    string elementy_stosu;
    vector<string> dane;
    stack<double> stos;

    cout << "Podaj dzialanie w postaci ONP (liczby i operatory oddzielone spacja...):" << endl;
    getline(cin, elementy_stosu);

    size_t pozycja = elementy_stosu.find(' ');
    size_t poczatkowa_pozycja = 0;

    //Dzielenie wejsciowego stringa separatorem spacji na tablice string
    while (pozycja != string::npos) {
        dane.push_back(elementy_stosu.substr(poczatkowa_pozycja, pozycja - poczatkowa_pozycja));
        poczatkowa_pozycja = pozycja + 1;

        pozycja = elementy_stosu.find(' ', poczatkowa_pozycja);
    }

    dane.push_back(
            elementy_stosu.substr(poczatkowa_pozycja, min(pozycja, elementy_stosu.size()) - poczatkowa_pozycja + 1));


    for (int i = 0; i < dane.size(); i++) {
        if (dane[i] != "+" && dane[i] != "-" && dane[i] != "*" && dane[i] != "/" && dane[i] != "^" &&
            dane[i] != "log" && dane[i] != "tryg" && dane[i] != "!!" && dane[i] != "!^") {
            stos.push(atoi(dane[i].c_str()));
            continue;
        }

        int wartosc_a = stos.top();
        stos.pop();
        int wartosc_b = stos.top();
        stos.pop();

        if (dane[i] == "+")
            stos.push(wartosc_b + wartosc_a);
        else if (dane[i] == "-")
            stos.push(wartosc_b - wartosc_a);
        else if (dane[i] == "*")
            stos.push(wartosc_b * wartosc_a);
        else if (dane[i] == "/")
            stos.push(wartosc_b / wartosc_a);
        else if (dane[i] == "^")
            stos.push(pow(wartosc_b, wartosc_a));
        else if (dane[i] == "log") {
            stos.push(log(wartosc_b) / log(wartosc_a));
        } else if (dane[i] == "tryg") {
            if (wartosc_b == 1) {
                stos.push(sin(wartosc_a));
            } else if (wartosc_b == 2) {
                stos.push(cos(wartosc_a));
            } else if (wartosc_b == 3) {
                stos.push(tan(wartosc_a));
            } else {
                cout << "error" << endl;
                exit;
            }
        } else if (dane[i] == "!!") {
            int wynik = 1;
            for (int i = 1; i <= wartosc_b; i++) {
                wynik *= i;
            }
            stos.push(wynik);
        } else if (dane[i] == "!^") {

            stos.push(exp(log(wartosc_b) / wartosc_a));

        }


    }

    cout << "Wynik: " << stos.top() << endl;

    return 0;
}
