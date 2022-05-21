#include <iostream>
using namespace std;

int main () {
    int x, b;
    cin >> b;
    while (cin >> x) {
        int suma10 = 0, aux = x;
        while (x >= b) {
            suma10 = suma10 + (x % b);
            x = x / b;
        }
        suma10 = suma10 + x;
        cout << aux << ": " << suma10 << endl;
    }
}