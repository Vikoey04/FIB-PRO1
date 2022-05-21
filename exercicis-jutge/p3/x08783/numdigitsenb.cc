#include <iostream>
using namespace std;

int main () {
    int b, n;
    while (cin >> b >> n) {
        int digits = 1;
        while (n >= b) {
            n = n / b;
            ++digits;
        }
        cout << digits << endl;
    }
}