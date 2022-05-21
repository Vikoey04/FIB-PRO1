#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int k = n-1; k >= 0; --k) {
            cout << v[k];
            if (k != 0) cout << " ";
        }
        cout << endl;
    }
}
