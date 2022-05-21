#include <iostream>
#include <vector>
using namespace std;

// Pre: 3 nombres enters
// Post: Retorna cert si b = a + c
bool es_tripleta(int a, int b, int c) {
    if (b == a + c) return true;
    else return false;
}

int main() {
    int ns, countt = 0;
    cin >> ns;
    for (int i = 0; i < ns; ++i) {
        int n, x, y, z, count = 0;
        cin >> n >> x >> y;
        
        for (int k = 2; k < n; ++k) {
            cin >> z;
            if (es_tripleta(x, y, z)) ++count;
            x = y;
            y = z;
        }
        cout << count << endl;
        countt = countt + count;
    }
    
    cout << "Total: " << countt << endl;
}
