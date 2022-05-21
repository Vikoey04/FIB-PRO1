#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2) {
    return n1 * d2 < n2 * d1;
}

int main() {
    int na, da, nb, db;
    cin >> na >> da >> nb >> db;
    cout << c_frac(na, da, nb, db) << endl;
}
