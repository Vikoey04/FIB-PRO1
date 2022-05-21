#include <iostream>
using namespace std;

bool es_creixent (int n) {
    if (n < 10) return true;
    int a, b;
    while (n != 0) { 
    a = n % 10;
    n = n / 10;
    b = n % 10;
    if (a < b) return false;
    }
    return true;
}


int main () {
    int n;
    cin >> n;
    cout << es_creixent (n) << endl;
}
