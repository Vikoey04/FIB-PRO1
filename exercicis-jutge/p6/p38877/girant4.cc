#include <iostream>
using namespace std;

void invers(int& n) {
    string x;
    if (cin >> x) {
        invers(n);
        if (n != 0) {
            --n;
            cout << x << endl;
        }
    }
}

int main () {
    int n;
    cin >> n;
    invers(n);
}
