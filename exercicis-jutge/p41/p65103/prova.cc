#include <iostream>
using namespace std;

int main () {
    int x, y, pos = 1;
    cin >> x;
    
    bool valory = false;
    if (cin >> y) valory = true;
    if (x < 1 or (not valory)) cout << "Posicio incorrecta." << endl;
    if (x == 1 and valory) cout << "A la posicio " << x << " hi ha un " << y << "." << endl;
    while (cin >> y and pos < x) {
        ++pos;
        if (pos == x) cout << "A la posicio " << x << " hi ha un " << y << "." << endl;
    }
    if (x > pos) cout << "Posicio incorrecta." << endl;
}
