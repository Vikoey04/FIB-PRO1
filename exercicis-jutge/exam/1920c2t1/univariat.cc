#include <iostream>
using namespace std;

// Pre: x >= 0 enter
// Post: Retorna si x es un nombre univariat
bool is_univariate(int n) {
    int digit = n % 10;
    n = n / 10;
    while (n != 0) {
        if (digit != n % 10) return false;
        n = n / 10;
    }
    return true;
}

int main() {
    int x, pos = 1;
    bool trobat = false;
    
    cin >> x;
    while (not trobat and x != -1) {
        if (is_univariate(x)) {
            trobat = true;
            cout << pos << endl;
        }
        ++pos;
        cin >> x;
    }
    
    if (not trobat) cout << "0" << endl;
}
