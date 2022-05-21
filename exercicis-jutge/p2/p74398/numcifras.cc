#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    int aux = k;
    
    for (int i = 2; i <= 16; ++i) {
        k = aux;
        int n = 1;
        
        while (k >= i) {
            k = k / i;
            n = n + 1;
        }
    
        cout << "Base " << i << ": " << n << " cifras." << endl;
    }
}
