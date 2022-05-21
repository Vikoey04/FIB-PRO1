#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0;
    int aux = n;
    while (n > 0) {
        a = a + (n % 10);
        n = n / 100;
    }
    if ((a % 2) == 0) cout << aux << " ES TXATXI" << endl;
    else cout << aux << " NO ES TXATXI" << endl;
}
