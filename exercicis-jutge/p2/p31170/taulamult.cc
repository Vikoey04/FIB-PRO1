#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 0 and n < 10) {
        for (int m = 1; m < 11; ++m) {
            cout << n << "*" << m << " = " << n*m << endl;
        }
    }
}
