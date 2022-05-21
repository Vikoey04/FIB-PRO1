#include <iostream>
using namespace std;

int main () {
    int n, aux;
    cin >> n;
    aux = n;
    for (int i = 1; i <= aux; ++i) {
        for (int j = 1; j < n; ++j) {
            cout << "+";
        }
        cout << "/";
        
        --n;
    
        for (int k = aux - n; k > 1; --k) {
            cout << "*";
        }
        cout << endl;
    }
}