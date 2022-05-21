#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, m;
    double x, max, min, mitj;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> m >> x;
        max = x, min = x, mitj = x;
        
        for (int j = 2; j <= m; ++j) {
            cin >> x;
            if (x > max) max = x;
            if (x < min) min = x;
            mitj = (mitj + x);
        }

        cout << min << " " << max << " " << mitj / m << endl;
    }
}
