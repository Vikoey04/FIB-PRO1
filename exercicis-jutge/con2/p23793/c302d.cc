#include <iostream>
using namespace std;

int compara(int d1, int m1, int a1, int d2, int m2, int a2) {
    if (a1 < a2) return -1;
    else if (a1 > a2) return 1; 
        if (m1 == m2) {
            if (d1 == d2) return 0;
            else if (d1 < d2) return -1;
            return 1;
        }
        else if (m1 < m2) return -1;
        return 1;
}

int main() {
    int d10, m10, a10, d20, m20, a20;
    while (cin >> d10) {
        cin >> m10 >> a10 >> d20 >> m20 >> a20;
        int wacho = compara(d10, m10, a10, d20, m20, a20);
        if (wacho == 0) cout << "iguals" << endl;
        else if (wacho < 0) cout << "anterior" << endl;
        else if (wacho > 0) cout << "posterior" << endl;
    }
}
