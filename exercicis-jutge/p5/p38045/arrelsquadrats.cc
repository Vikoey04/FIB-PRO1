#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(6);
    int x;
    double y;
    while (cin >> x) {
        y = sqrt(x);
        cout << x * x << " " << y << endl;
    }
}
