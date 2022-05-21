#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    for (int k = n-1; k >= 0; --k) {
        for (int j = v[k].size()-1; j >= 0; --j) {
            cout << v[k][j];
        }
        cout << endl;
    }
}
