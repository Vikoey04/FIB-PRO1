#include <iostream>
using namespace std;

//Multiple de quatre, si acaba en XX00, XX ha de ser multiple de quatre també

int main() {
    int year;
    cin >> year;
    
    if (year % 4 == 0) {
        if ((year / 100) % 4 == 0) cout << "YES" << endl;
        else if (year % 100 == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
