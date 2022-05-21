#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        int a, b;
        cin >> a;
        
        while (a > 0) {
            cin >> b;
            if (a < b) ++count;
            a = b;
        }
        
        cout << count << endl;
    }
}
