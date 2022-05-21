#include <iostream>
#include <vector>
using namespace std;

bool div_3(int a) {
    if ((a + 2) % 3 == 0) return true;
    else return false;
}

int main () {
    int n, nChar = 3;
    cin >> n;
    for (int y = 1; y < n; ++y) {
        nChar = nChar * 3;
    }
    
    for (int i = 0; i <; ++i) {
        for (int k = 0; k < nChar + 2; ++k) {
            if (k == 0 or k == nChar + 1 or (not div_3(i) and k = (nChar+1)/2) cout << "|";
            else if (div_3(i) and k)
            else cout << " ";
        }
        cout << endl;
    }
}
