#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    double x;
    double r = 0;
    double n = 0;
    
    while (cin >> x) {
        r = r + x;
        ++n;
    }
    cout << r / n << endl;
}
