#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int n;
    cin >> n;
    
    double x = 0;
    double y = 0;
    double x1;
    
    for (int i = 1; i <= n; ++i) {
        cin >> x1;
        x = x + (x1 * x1);
        y = y + x1;
    }
    
    double a = (n - 1);
    cout << (x / a) - ((y * y) / (n * a)) << endl;
}
