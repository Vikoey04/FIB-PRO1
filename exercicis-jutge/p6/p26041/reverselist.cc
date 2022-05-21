#include <iostream>
using namespace std;

void invers() {
    string x;
    if (cin >> x) {
        invers();
        cout << x << endl;
    }
}

int main () {
    invers();
}
