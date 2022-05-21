#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x > 0) {
        int y;
        int n = 0;
        while (cin >> y) {
            if ((y % x) == 0) {
                n = n + 1;
            }
        }
        cout << n << endl;
    }
}
