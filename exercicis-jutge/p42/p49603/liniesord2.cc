#include <iostream>
using namespace std;

int main () {
    int x, fila = 0, lastline = 1;
    string b, a;
    bool lineord = false;
    while (cin >> x) {                                   //and (not filatrobada)
        ++fila;
        if (x <= 1) {
            if (x == 1) cin >> b;
            lastline = fila;
            lineord = true;
        }
        else if (x > 1) {
            cin >> b;
            bool ordenada = true;
            for (int i = 2; i <= x; ++i) {
                cin >> a;
                if (a < b) ordenada = false;
                b = a;
            }
            if (ordenada) {
                lastline = fila;
                lineord = true;
            }
        }
    }
    if (lineord) cout << "L'ultima linia ordenada creixentment es la " << lastline << "." << endl;
    else if (not lineord) cout << "No hi ha cap linia ordenada creixentment." << endl;
}
