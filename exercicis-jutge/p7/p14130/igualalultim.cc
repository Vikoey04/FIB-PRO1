#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        int eb;
        cin >> eb;
        v[i] = eb;
    }
    int count = 0;
    for (int k = 0; k <= n-2; ++k) {
        if (v[k] == v[n-1]) ++count;
    }
    cout << count << endl;
}
