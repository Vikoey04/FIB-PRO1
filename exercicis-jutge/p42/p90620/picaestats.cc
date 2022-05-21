#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    bool pica = false;
    cin >> a >> b;
    while (cin >> c and (not pica)) {
        if (b > 3143) {
            if (a < b and b > c and c != 0) pica = true;
        }
        a = b, b = c;
    }
    if (pica) cout << "SI" << endl;
    else if (not pica) cout << "NO" << endl;
    
}
