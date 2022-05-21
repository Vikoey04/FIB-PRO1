#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n;
    cin >> n;
    double x = 0;
    
    for (double i = 1; i <= n; ++i) {
        x = x + (1 / i);
    }
    
    cout << x << endl;
}
