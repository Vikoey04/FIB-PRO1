#include <iostream>
using namespace std;

int main () {
    int x, y;
    cin >> x;
    for (int i = 1; i <= x; ++i) {
        cin >> y;
    }
    cout << "A la posicio " << x << " hi ha un " << y << "." <<  endl;
}
