#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int a, b, c;
    
    a = x % 10;
    x = x / 10;
    b = x % 10;
    x = x / 10;
    c = x % 10;
    cout << (a + b + c) << endl;
}
