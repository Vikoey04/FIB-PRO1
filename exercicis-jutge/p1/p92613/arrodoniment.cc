#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    cout << int(x) << " ";
    
    if (int(x) == x) cout << int(x) << " ";
    else cout << int(x+1) << " ";
    
    if (x < int(x)+0.5) cout << int(x) << endl;
    else cout << int(x)+1 << endl;
}
