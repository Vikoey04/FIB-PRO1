#include <iostream>
using namespace std;

void invers(int& n) {
    string x;
    if (cin >> x) {
        ++n;
        invers(n);
        if (n <= 0) cout << x << endl;
        n = n - 2;
    }
}

int main () {
    int n = 0;
    invers(n);
}
