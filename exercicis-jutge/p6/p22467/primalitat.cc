#include <iostream>
using namespace std;

int suma_digits(int x) {
    if (x < 10) return x;
    else return x % 10 + suma_digits(x / 10);
}

bool es_primer (int n) {
    int j = 2;
    if (n < 2) return false;
    while (j * j <= n) {
        if (n % j == 0 and n > 1) return false;
        ++j;
    }
    return true;
}

bool es_primer_perfecte (int n) {
        if (n < 10) return es_primer(n);
        else return es_primer(n) and es_primer_perfecte(suma_digits(n));
        
        //Em faltava el return es_primer(n), el que fa es dir si el valor actual +gran que 9 si es primer o no

}

int main () {
    int x;
    cin >> x;
    bool hontoya = es_primer_perfecte (x);
    cout << hontoya << endl;
}
