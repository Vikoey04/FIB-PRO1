#include <iostream>
#include <vector>
using namespace std;

typedef vector < vector<int> > Matriu;
Matriu producte(const Matriu& a, const Matriu& b) {
    int n = a.size();
    Matriu result(n,vector<int>(n,0));
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n; ++k) {
            for (int j = 0; j < n; ++j){
                result[i][k] = result[i][k] + a[i][j] * b[j][k];
            }
        }
    }
    return result;
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
    Matriu mat2 (n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat2[i][j];
        }
    }
    
    Matriu a = producte(mat, mat2);
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
}
