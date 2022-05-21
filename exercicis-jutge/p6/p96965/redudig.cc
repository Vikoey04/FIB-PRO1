#include <iostream>
using namespace std;

int suma_digits(int x) {
    if (x < 10) return x;
    else return x % 10 + suma_digits(x / 10);
}

int reduccio_digits(int x) {
    if (x < 10) return x;
    else return reduccio_digits(suma_digits(suma_digits(x)));
}

int main () {
    int x, eb;
    cin >> x;
    eb = reduccio_digits(x);
    cout << eb << endl;
}
