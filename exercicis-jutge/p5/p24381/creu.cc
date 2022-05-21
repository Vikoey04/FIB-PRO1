#include <iostream>
using namespace std;

void cross (int n, char c) {
    for (int j = 1; j <= n; ++j) {
        for (int i = 1; i <= n; ++i) {
            if (j == n / 2 + 1 or i == n / 2 + 1) cout << c;
            else if (i < n / 2 + 1) cout << " ";
        }
        cout << endl;
    }
}


int main () {
    int x;
    char s;
    cin >> x >> s;
    cross (x, s);
}
