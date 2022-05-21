#include <iostream>
using namespace std;

bool es_any_de_traspas (int any) {
    bool traspas = false;
    if (any % 4 == 0 and any % 100 != 0) traspas = true;
    else if (any % 100 == 0 and (any / 100) % 4 == 0) traspas = true;
    return traspas;
}

bool es_data_valida (int d, int m, int a) {
    if (m < 1 or m > 12 or d < 1 or d > 31) return false;
    else if (d == 31 and (m == 4 or m == 6 or m == 9 or m == 11)) return false;
    else if (m == 2 and (not es_any_de_traspas(a)) and d > 28) return false;
    else if (m == 2 and d > 29) return false;
    return true;
}

int main () {
    int d, m, a;
    cin >> d >> m >> a;
    int hola = es_data_valida (d, m, a);
    cout << hola << endl;
}
