#include <iostream>
#include <vector>
using namespace std;


int main () {
    vector <int> v(1001,0);
    int n;
    cin >> n;
    
    const int NUM = 1000000000;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v[x - NUM] = v[x - NUM] + 1;
    }
    
    for (int k = 0; k < 1001; ++k) {
        if (v[k] != 0) cout << NUM + k << " : " << v[k] << endl;
    }
}
