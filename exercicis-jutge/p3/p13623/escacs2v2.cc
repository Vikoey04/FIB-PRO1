#include <iostream>
using namespace std;

int main () {
    int f, c, coins = 0;
    cin >> f >> c;
    char x;
    if (c % 2 != 0) {
        for (int k = 1; k <= f * c; ++k) {
                cin >> x;
                if (k % 2 != 0) coins = coins + int(x) - int('0');
            }
    }
    else if (c % 2 == 0) {
        for (int i = 1; i <= f; ++i) {
            if (i % 2 != 0) {
                for (int m = 1; m <= c; ++m) {
                    cin >> x;
                    if (m % 2 != 0) coins = coins + int(x) - int('0');
                }
            }
            else if (i % 2 == 0) {
                for (int n = 1; n <= c; ++n) {
                    cin >> x;
                    if (n % 2 == 0) coins = coins + int(x) - int('0');
                }
            }
        }
    }
    cout << coins << endl;
}
