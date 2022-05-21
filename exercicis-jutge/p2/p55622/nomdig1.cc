#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int y = x;
    int n = 1;
    
    while (x > 9) {
        x = x / 10;
        n = n + 1;
    }
    cout << "El nombre de digits de " << y << " es " << n << "." << endl; 
}
