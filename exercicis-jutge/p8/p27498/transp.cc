#include <iostream>
#include <vector>
using namespace std;

typedef vector < vector<int> > Matriu;

void transposa(Matriu& m) {
    int n = m.size();
    Matriu m2 (n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            m2[i][j] = m[j][i];
        }
    }
    m = m2;
}


int main () {
    int n;
    cin >> n;
    Matriu mat (n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }
    
    transposa(mat);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
}
