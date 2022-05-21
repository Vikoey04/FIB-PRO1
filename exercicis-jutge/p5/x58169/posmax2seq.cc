#include <iostream>
using namespace std;

void InfoSequencia (int& max, int& lpos) {
    int x, pos = 1;
    cin >> max >> x;
    while (x != 0) {
        ++pos;
        if (x >= max) {
            max = x;
            lpos = pos;
        }
        cin >> x;
    }
}

int main () {
    int max, lpos = 1;
    InfoSequencia (max, lpos);
    int x, posm = 0, pos2 = 0;
    bool trobat = false;
    cin >> x;
    while (x != 0 and not trobat) {
        ++pos2;
        if (x == max) {
            posm = pos2;
            trobat = true;
        }
        cin >> x;
    }
    cout << max << " " << lpos << " ";
    if (trobat) cout << posm << endl;
    else cout << "-" << endl;
}
