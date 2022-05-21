#include <iostream>
using namespace std;

int main () {
    int a, b, c, A, B, C;
    cin >> a >> b >> c;
    if (a > b) {
        int aux = a;
        a = b;
        b = aux;
    }
    if (c < a) A = c, B = a, C = b;
    else if (c < b) A = a, B = c, C = b;
    else A = a, B = b, C = c;
    char x;
    for (int i = 1; i <= 3; ++i) {
        cin >> x;
        if (x == 'A') cout << A;
        else if (x == 'B') cout << B;
        else if (x == 'C') cout << C;
        if (i < 3) cout << " ";
    }
    cout << endl;
}
