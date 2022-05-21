#include <iostream>
using namespace std;

int min2 (int x, int y) {
    if (x < y) return x;
    else return y;
}
int sum_min_max (int x, int y, int z) {
    int s;
    if (x > y) {
        if (x > z) s = x + min2(y, z);
        else s = y + z;
    }
    else if (x < y) {
        if (y > z) s = y + min2(x, z);
        else s = z + x;
    }
    else s = x + z;
    return s;
}

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    cout << sum_min_max(a, b, c) << endl;
}
