#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(10);
    
    int n, m;
    while (cin >> n >> m) {
        if (m > n) {
            int aux = n;
            n = m;
            m = aux;
        }
        double n2 = 0;
        for (double i = n; i > m; --i) {
            n2 = n2 + 1 / i;
        }
        cout << n2 << endl;
    }
}
