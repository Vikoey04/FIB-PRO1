#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t < 10) cout << "fa fred" << endl;
    else if (t > 30) cout << "fa calor" << endl;
    else cout << "s'esta be" << endl;
    
    if (t >= 100) cout << "l'aigua bulliria" << endl;
    if (t <= 0) cout << "l'aigua es gelaria" << endl;
}



//  calor t > 30
// fred t < 10
//  aigua bull a 100 o + graus
//  aigua gel a 0 o - graus
