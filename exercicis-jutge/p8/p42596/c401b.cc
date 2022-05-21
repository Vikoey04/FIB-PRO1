#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

void in_mat(Matriu& M) {
    int f = M.size(), c = M[0].size();
    for (int i = 0; i < f; ++i) {
        for (int k = 0; k < c; ++k) {
            cin >> M[i][k];
        }
    }
}

void min_max(const Matriu& mat, int& minim, int& maxim) {
    int f = mat.size(), c = mat[0].size();
    for (int i = 0; i < f; ++i) {
        for (int k = 0; k < c; ++k) {
            if (minim > mat[i][k]) minim = mat[i][k];
            if (maxim < mat[i][k]) maxim = mat[i][k];
        }
    }
}

int main () {
    int f, c, dif = 0, nMat = 1, pMat = 1;
    while (cin >> f >> c) {
        Matriu M(f, vector<int>(c));
        in_mat(M);
        
        int min = M[0][0], max = min;
        min_max(M, min, max);
        
        int difAct = max - min;
        if (difAct > dif) {
            pMat = nMat;
            dif = difAct;
        }
        ++nMat;
    }
    cout << "la diferencia maxima es " << dif << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << pMat << endl;
}
