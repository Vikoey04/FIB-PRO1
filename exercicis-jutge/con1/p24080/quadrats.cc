#include <iostream>
using namespace std;

int main () {
    int a;
    bool espacio = false;
    
    while (espacio or cin >> a) {
        espacio = false;
        for (int i = 1; i <= a; ++i) {
            for (int k = 1; k <= a; ++k) {
                cout << a;
            }
            cout << endl;
        }
        if (cin >> a) {
            cout << endl;
            espacio = true;
        }
    }
}
