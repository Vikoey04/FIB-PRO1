#include <iostream>
using namespace std;

int main () {
    string par;
    int count = 0;
    while (cin >> par) {
        if (par == "hola") ++count;
    }
    cout << count << endl;
}
