#include <iostream>
using namespace std;

int mcd(int a, int b) {
    int aux;
    while (b != 0) aux = a, a = b, b = aux % b; 
    return a;
}

void read_rational(int& num, int& den) {
    char c;
    cin >> num >> c >> den;
    int mcd2 = mcd(num, den);
    num = num / mcd2;
    den = den / mcd2;
}

int main() {
    int n, d;
    read_rational(n, d);
    cout << n << " " << d << endl;
}
