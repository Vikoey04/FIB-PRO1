#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

void in_mat(Matriu& mat) {
    int f = mat.size(), c = mat[0].size();
    for (int i = 0; i < f; ++i) {
        for (int k = 0; k < c; ++k) {
            cin >> mat[i][k];
        }
    }
}

bool diag_creix(const Matriu& M, int a, int b) {
    int f = M.size(), c = M[0].size();
    
    int i = a-1, j = b-1, comp = M[a][b];
    while (i >= 0 and j >= 0) {
        if (M[i][j] > comp) comp = M[i][j];
        else return false;
        --i;
        --j;
    }
    
    i = a-1, j = b+1, comp = M[a][b];
    while (i >= 0 and j < c) {
        if (M[i][j] > comp) comp = M[i][j];
        else return false;
        --i;
        ++j;
    }
    
    i = a+1, j = b-1, comp = M[a][b];
    while (i < f and j >= 0) {
        if (M[i][j] > comp) comp = M[i][j];
        else return false;
        ++i;
        --j;
    }
    
    i = a+1, j = b+1, comp = M[a][b];
    while (i < f and j < c) {
        if (M[i][j] > comp) comp = M[i][j];
        else return false;
        ++i;
        ++j;
    }
    return true;
}


int main () {
    int f, c;
    while (cin >> f >> c) {
        Matriu Mat(f, Fila(c));
        in_mat(Mat);
        cin >> f >> c;
        if (diag_creix(Mat, f, c)) cout << "si" << endl;
        else if (not diag_creix(Mat, f, c)) cout << "no" << endl;
    }
}
