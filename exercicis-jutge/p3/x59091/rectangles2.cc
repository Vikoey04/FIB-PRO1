#include <iostream>
using namespace std;

int main () {
    int n, m;
    bool espai = true;

    while (cin >> n >> m) {
        if (not espai) cout << endl;
        int x = 9;
        for (int i = 1; i <= n; ++i) {
            for (int k = 1; k <= m; ++k) {
                cout << x;
                if (x > 0) x = x - 1;
                else x = 9;
            }

            cout << endl;
        }

        espai = false;
    }
}