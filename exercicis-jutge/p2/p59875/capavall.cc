#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x < y) {
        int aux = x;
        x = y;
        y = aux;
    }
    
    for (int i = x; i >= y; --i) {
        cout << i << endl;
    }
    
}
