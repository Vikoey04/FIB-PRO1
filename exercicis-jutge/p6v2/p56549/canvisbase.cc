#include <iostream>
using namespace std;

void bin(int x) {
    int q = x / 2;
    if (q != 0) bin(q);
    cout << x % 2;
}

void octal(int x) {
    int q = x / 8;
    if (q != 0) octal(q);
    cout << x % 8;
}

void hexa(int x) {
    int q = x / 16;
    char c;
    if (q != 0) hexa(q);
    
    if ((x-16 * q) >= 10) {
        c = 'A'+(x % 16) - 10;
        cout << c;
    }
    else cout << x % 16;
}

int main() {
    int x;
    while (cin >> x) {
        cout << x << " = ";
        bin(x);
        cout << ", ";
        octal(x);
        cout << ", ";
        hexa(x);
        cout << endl;
    }
}
