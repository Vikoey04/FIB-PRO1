#include <iostream>
using namespace std;

int main () {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    
    if (a1 > a2) {
     int a3 = a1;
     a1 = a2;
     a2 = a3;
    }
    if (b1 > b2) {
     int b3 = b1;
     b1 = b2;
     b2 = b3;
    }
    
    
    if (a1 == b1 and a2 == b2) cout << "=" << endl;
    else if(a1 >= b1 and a2 <= b2) cout << "1" << endl;
    else if (a1 <= b1 and a2 >= b2) cout << "2" << endl;
    else cout << "?" << endl;
}
