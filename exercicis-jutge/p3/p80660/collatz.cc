#include <iostream>
using namespace std;

int main () {
    int x;
    while (cin >> x) {
        int count = 0;
        while (x > 1) {
            if (x % 2 == 0) x = x / 2;
            else x = x * 3 + 1;
            ++count;
        }
        cout << count << endl;
    }
}
