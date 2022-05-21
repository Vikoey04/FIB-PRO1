#include <iostream>
using namespace std;

int main () {
    char x;
    bool hayas = false;
    cin >> x;
    while ((x != '.') and (not hayas)) {
        if (x == 'a') hayas = true;
        cin >> x;
    }
    
    if (hayas) cout << "si" << endl;
    else cout << "no" << endl;
}
