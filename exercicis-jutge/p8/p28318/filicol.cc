#include <iostream>
#include <vector>
using namespace std;

typedef vector <int> Filas;
typedef vector <Filas> Matriz;

int main() {
    int n, m;
    cin >> n >> m;
    Matriz mat(n, Filas(m));
    
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < m; ++k) {
            cin >> mat[i][k];
        }
    }
    
    string word;
    while (cin >> word) {
        if (word == "fila") {
            int fil;
            cin >> fil;
            cout << word << " " << fil << ":";
            for (int j = 0; j < m; ++j) {
                cout << " " << mat[fil - 1][j];
            }
            cout << endl;
        }
        else if (word == "columna") {
            int col;
            cin >> col;
            cout << word << " " << col << ":";
            for (int j = 0; j < n; ++j) {
                cout << " " << mat[j][col - 1];
            }
            cout << endl;
        }
        else if (word == "element") {
            int fil, col;
            cin >> fil >> col;
            cout << word << " " << fil << " " << col << ": " << mat[fil - 1][col - 1] << endl;
        }
    }
}
