#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;
    s = s + 1;
    
    m = (s / 60) + m;
    s = s % 60;
    h = (m / 60) + h;
    m = m % 60;
    
    if (h == 0 or h > 23) cout << "00:";
    else if (h < 10) cout << "0" << h << ":";
    else cout << h << ":";
    
    if (m == 0) cout << "00:";
    else if (m < 10) cout << "0" << m << ":";
    else cout << m << ":";
    
    if (s == 0) cout << "00" << endl;
    else if (s < 10) cout << "0" << s << endl;
    else cout << s << endl;
}
