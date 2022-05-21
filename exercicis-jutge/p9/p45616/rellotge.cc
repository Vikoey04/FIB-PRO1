#include <iostream>
using namespace std;

struct Rellotge {
    int h;
    int m;
    int s;
};

Rellotge mitja_nit() {
    Rellotge dotze;
    dotze.h = 0;
    dotze.m = 0;
    dotze.s = 0;
    return dotze;
}

void incrementa(Rellotge& r) {
    ++r.s;
    if (r.s == 60) {
        r.s = 0;
        ++r.m;
        if (r.m == 60) {
            r.m = 0;
            ++r.h;
            if (r.h == 24) r.h = 0;
        }
    }
}

void escriu(const Rellotge& r) {
    if (r.h < 10) cout << "0";
    cout << r.h << ":";
    if (r.m < 10) cout << "0";
    cout << r.m << ":";
    if (r.s < 10) cout << "0";
    cout << r.s << endl;
}

int main () {
    
}
