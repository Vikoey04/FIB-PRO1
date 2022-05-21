#include <iostream>
using namespace std;

int main () {
    int a, h, m, s;
    cin >> a;
    
    s = a % 60;
    m = (a / 60) % 60;
    h = a / 3600;
    
    cout << h << " " << m << " " << s << endl;
}
