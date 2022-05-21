#include <iostream>
using namespace std;

struct Racional {
    int num, den;
};

// Calcula el mcd de dos enters
int mcd(int a, int b) {
    int aux;
    while (b != 0) {
        aux = a;
        a = b;
        b = aux % b;
    }
    return a;
}

// Pre: -
// Post: Retorna n/d
//       Si num = 0, el den passa a ser 1
//       Den positiu, fraccio irreductible
Racional racional(int n, int d) {
    Racional x;
    if (n == 0) {
        x.num = 0;
        x.den = 1;
        return x;
    }
    else {
        int aux = mcd(n, d);
        n = n / aux;
        d = d / aux;
        if (d < 0) n = -n, d = -d;
        x.num = n;
        x.den = d;
        return x;
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    Racional nombre = racional(x, y);
    cout << nombre.num << " " << nombre.den << endl;
}
