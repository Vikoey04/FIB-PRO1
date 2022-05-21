#include <iostream>
using namespace std;

void info_sequencia(int& suma, int& ultim) {
    int x = ultim, aux;
    suma = ultim;
    bool zeraco = false;
    while (not zeraco) {
        suma = suma + x;
        aux = x;
        cin >> x;
        if (x == 0) {
            zeraco = true;
            ultim = aux;
        }
    }
}

int main () {
    int ultim, suma, similars = 1;
    cin >> ultim;

    info_sequencia(suma, ultim);
    int suma1 = suma, ultim1 = ultim;
    
    while (cin >> ultim) {
        info_sequencia(suma, ultim);
        if (suma == suma1 and ultim == ultim1) ++similars;
    }
    cout << similars << endl;
}
