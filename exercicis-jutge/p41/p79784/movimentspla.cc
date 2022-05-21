#include <iostream>
using namespace std;

int main () {
    char z;
    int x = 0, y = 0;
    
    while (cin >> z) {
        if (z == 'n') --y;
        else if (z == 's') ++y;
        else if (z == 'e') ++x;
        else if (z == 'o') --x; 
    }    
    
    cout << "(" << x << ", " << y << ")" << endl;
}
