#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        vector <int> v(n);
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            v[i] = a;
        }
        if (n > 0) {
            for (int k = n-1; k >= 0; --k) {
                int b = v[k];
                cout << b;
                if (k > 0) cout << " ";
            }
        }
        cout << endl;
    }
}
