#include <iostream>
using namespace std;

int max(int x, int y) {
    if (x <= y) return y;
    return x;
}

int engreixa(int x) {
    if (x < 10) return x;
    int e = engreixa(x / 10);
    int a = e % 10;
    int b = x %  10;
    int m = max(a, b);
    return e * 10 + m;
}

int main() {
    int x;
    while (cin >> x) {
        cout << engreixa(x) << endl;
    }
}
