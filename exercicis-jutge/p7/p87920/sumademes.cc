#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        int suma = 0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            suma = suma + v[i];
        }
        bool esta = false;
        int i = n - 1;
        while (i >= 0 and not esta) {
                if (v[i] == suma - v[i]) {
                    cout << "YES" << endl;
                    esta = true;
                }
                --i;
            }
        if (not esta) cout << "NO" << endl;
    }
}
