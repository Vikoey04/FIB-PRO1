#include <iostream>
using namespace std;

int suma_digits(int n) {
    if (n == 0) return 0;
    else return suma_digits(n / 10) + (n % 10);
}

bool es_multiple_3(int n) {
    n = suma_digits(n);
    return n%3 == 0;
}

int main() {
    int x;
    while (cin >> x) {
        int m = es_multiple_3(x);
        cout << m << endl;
    }
}
