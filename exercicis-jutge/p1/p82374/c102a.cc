#include <iostream>
using namespace std;

int main() {
    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;
    
    if (x >= a and x <= b) cout << "si" << endl;
    else if (x >= c and x <= d) cout << "si" << endl;
    else cout << "no" << endl;
}
