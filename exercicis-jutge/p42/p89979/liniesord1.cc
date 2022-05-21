#include <iostream>
using namespace std;

int main () {
    int x, fila = 0, firstline;
    string b, a;
    bool filatrobada = false;
    while (cin >> x) {                                   //and (not filatrobada)
        ++fila;
        if (x <= 1) {
            if (x == 1) cin >> a;
            if (not filatrobada) firstline = fila;
            filatrobada = true;
            
        }
        else if (x > 1) {
            bool ordenada = true;
            cin >> a;
            for (int i = 2; i <= x; ++i) {
                cin >> b;
                if (a > b) ordenada = false;
                a = b;
            }
            if (ordenada) {
                if (not filatrobada) firstline = fila;
                filatrobada = true;
            }
        }
    }
    if (filatrobada) cout << "La primera linia ordenada creixentment es la " << firstline << "." << endl;
    else if (not filatrobada) cout << "No hi ha cap linia ordenada creixentment." << endl;
}
