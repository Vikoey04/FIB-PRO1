#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(6);
    
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i){
        string x;
        cin >> x;
        if (x == "rectangle") {
            double a, b;
            cin >> a >> b;
            cout << (a * b) << endl;
        }
        if (x == "cercle") {
            double a;
            cin >> a;
            cout << (3.14159265358979323846 * a * a) << endl;
        }
    }
}
