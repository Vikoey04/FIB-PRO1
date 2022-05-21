#include <iostream>
using namespace std;

int main () {
    char x;
    int count = 0;
    while (cin >> x and x != '.') {
        if (x == 'a') ++count;
    }
    cout << count << endl;
}
