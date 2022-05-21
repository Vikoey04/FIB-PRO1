#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;
Matriu producte(const Matriu& a, const Matriu& b) {
    int na = a.size(), nb = b[0].size();
    Matriu result(na, vector<int>(nb, 0));
    for (int i = 0; i < na; ++i) {
        for (int k = 0; k < nb; ++k) {
            for (int j = 0; j < b.size(); ++j) {
                result[i][k] = result[i][k] + a[i][j] * b[j][k];
            }
        }
    }
    return result;
}

int main() {
    int n, n2;
    cin >> n >> n2;
    Matriu mat(n, vector<int>(n2));
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n2; ++k) {
            cin >> mat[i][k];
        }
    }
    cin >> n >> n2;
    Matriu mat2(n, vector<int>(n2));
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n2; ++k) {
            cin >> mat2[i][k];
        }
    }
    Matriu a = producte(mat, mat2);
    for (int k = 0; k < a.size(); ++k) {
        for (int j = 0; j < a[0].size(); ++j) {
            cout << a[k][j] << " ";
        }
        cout << endl;
    }
}
