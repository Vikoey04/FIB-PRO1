#include <iostream>
using namespace std;

bool es_capicua (int n) {
    int x = n, girar = 0;
    while (x != 0) {
        girar = girar * 10 + x % 10;
        x = x / 10;
    }
    
    return n == girar;
}

int main () {
    int x;
    cin >> x;
    bool san = es_capicua (x);
    cout << san << endl;
    
}
