#include <iostream>
using namespace std;

int main () {
    int x;
    while (cin >> x) {
        int digits = 0, aux = x;
        while (x > 0) {
            digits = digits + x % 10;
            x = x / 10;
        }
        cout << "La suma dels digits de " << aux << " es " << digits << "." << endl;
    }
}
