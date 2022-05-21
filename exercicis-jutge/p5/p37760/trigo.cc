#include <iostream>
#include <cmath>

using namespace std;
#define PI 3.14159265358979323846

int main () {
    cout.setf(ios::fixed);
    cout.precision(6);
    double x, a, b;
    while (cin >> x) {
        a = sin(x * PI / 180);
        b = cos(x * PI / 180);
        cout << a << " " << b << endl;
    }
}
