#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x > 0) {
        for (int i = 0; i <= x; ++i ) {
            cout << i << endl;
        }
    }
    else if (x < 0) {
        for (int i = 0; i >= x; --i) {
            cout << i << endl;
        }
    }
    else cout << "0" << endl;
}
