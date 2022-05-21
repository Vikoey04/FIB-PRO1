#include <iostream>
using namespace std;

int main () {
    int a, b;
    while (cin >> a >> b) {
        int aux = 1;
        for (int i = 1; i <= b; ++i) {
            aux = aux * a;
        }
        if (b == 0) cout << "1" << endl;
        else if (a == 0) cout << "0" << endl;
        else cout << aux << endl;
    }
}