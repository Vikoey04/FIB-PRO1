#include <iostream>
using namespace std;

int main () {
    int a, d, h, m, s;
    cin >> a >> d >> h >> m >> s;
    cout << ((((a*365+d) * 24+h) * 60+m) * 60+s) << endl;
}
