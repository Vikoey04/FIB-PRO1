#include <iostream>
using namespace std;

int main () {
    char a;
    cin >> a;
    if (a >= 'A' and a <= 'Z') cout << char(a+32) << endl;
    if (a >= 'a' and a <= 'z') cout << char(a-32) << endl;
}
