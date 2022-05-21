#include <iostream>
using namespace std;

int num_digits(int x) {
    int digits = 0;
    if (x == 0) return 1;
    else {
        while (x > 0) {
            ++digits;
            x = x / 10;
        }
    }
    return digits;
}

int num_central(int y) {
    int central = y;
    int digits = (num_digits(y))/2;
    
    for (int i = 0; i < digits; ++i) {
        central = central / 10;
    }
    
    central = central % 10;
    return central;
}

int main () {
    int n, a, b;
    cin >> n >> a;

    bool winA = true, winB = true, fi = false;
    int inicial = num_central(a);
    int i = 0;
    
    while (i < n and (not fi)) {
        if (i != 0) cin >> a; 
        cin >> b;
        
        if (num_digits(a) % 2 == 0 and winB) {
            winA = false;
            fi = true;
        }
        else if (num_digits(b) % 2 == 0 and winA) {
            winB = false;
            fi = true;
        }
        else if (num_central(a) != inicial and winB) {
            winA = false;
            fi = true;
        }
        else if (num_central(b) != inicial and winA) {
            winB = false;
            fi = true;
        }
        
        ++i;
    }
    
    if (winA and winB) cout << "=" << endl;
    else if (winA) cout << "A" << endl;
    else if (winB) cout << "B" << endl;
}
