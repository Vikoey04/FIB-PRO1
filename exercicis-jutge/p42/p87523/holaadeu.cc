#include <iostream>
using namespace std;

int main () {
    char x;
    bool hola = false;
    cin >> x;
    char a = x, b = x, c = x, d = x;
    while (cin >> x and x != '.' ) {
        a = b;
        b = c;
        c = d;
        d = x;
        if (a == 'h' and b == 'o' and c == 'l' and d == 'a') hola = true;
    }
    if (hola) cout << "hola" << endl;
    else if (not hola) cout << "adeu" << endl;
}

//and (not hola)
