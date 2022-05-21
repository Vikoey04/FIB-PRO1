#include <iostream>
using namespace std;

int main () {
    int x;
    cin >> x;
    string y = "*";
    for (int i = 1; i <= x; ++i) {
        cout << y << endl;
        y = y + "*";
    }
}