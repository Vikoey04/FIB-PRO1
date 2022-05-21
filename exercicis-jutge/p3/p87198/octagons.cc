#include <iostream>
using namespace std;

int main () {
    int x;
    while (cin >> x) {
        int aux = x, aux2 = x;
        for (int s1 = 1; s1 <= aux - 1; ++s1) {
            for (int i = 1; i < aux2; ++i) cout << " ";
            for (int k = 1; k <= x; ++k) cout << "X";
            cout << endl;
            --aux2;    //espais
            x = x + 2;   //nombre de X
        }
        
        for (int a = 1; a <= aux; ++a) {
            for (int b = 1; b <= x; ++b) cout << "X";
            cout << endl;
        }
        ++aux2;
        x = x - 2;
        
        for (int s2 = 1; s2 <= aux - 1; ++s2) {
            for (int i2 = 1; i2 < aux2; ++i2) cout << " ";
            for (int k2 = 1; k2 <= x; ++k2) cout << "X";
            cout << endl;
            ++aux2;
            x = x - 2;
        }
        cout << endl;
    }
}
