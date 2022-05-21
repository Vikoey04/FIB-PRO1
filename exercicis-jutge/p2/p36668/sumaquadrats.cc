#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int r = 0;
    
    for (int i = 1; i <= n; ++i) {
        r = r + (i*i);
    }
    
    cout << r << endl;
    
}
