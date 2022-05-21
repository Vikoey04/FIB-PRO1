#include <iostream>
using namespace std;

void invers() {
    string x;
    if (cin >> x) {
        if (x != "fi") {
            invers();
            cout << x << endl;
        }
    }
}

int main () {
    invers();
}
