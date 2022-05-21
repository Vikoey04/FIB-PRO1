#include <iostream>
using namespace std;

int main () {
    int x, linies = 1;
    for (int i = 1; i < x) {
        linies = linies * 2;
    }
    --linies;
    
    for (int k = 1; k <= linies) {
        for (int j = 1; j <= x; ++j) {
            if (j == 1) cout << "*";
        }
        cout << endl;
    }
}
