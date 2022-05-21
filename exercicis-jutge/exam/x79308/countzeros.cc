#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Vect;

Vect llegir_vect(int n) {
    Vect x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    return x;
}

void imprimir_vect(const Vect& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cout << v[i] << endl;
    }
}

void zeros_counter(const Vect& x, Vect& y) {
    int size = x.size();
    int count = 0;
    for (int i = size-1; i >= 0; --i) {
        if (x[i] == 0) {
            ++count;
        }
        y[i] = count;
    }
}

int main() {
    int n;
    cin >> n;
    Vect seq = llegir_vect(n);
    Vect cou(n, 0);
    zeros_counter(seq, cou);
    imprimir_vect(cou);
}
