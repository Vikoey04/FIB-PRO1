#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matriuc;
typedef vector< vector<int> > Matriun;

Matriuc llegir_char(int x, int y) {
    Matriuc tauler(x, vector<char>(y));
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cin >> tauler[i][j];
        }
    }
    return tauler;
}

Matriun llegir_num(int x, int y) {
    Matriun tauler(x, vector<int>(y));
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cin >> tauler[i][j];
        }
    }
    return tauler;
}

bool esta(const Matriuc& ll, string par, int i, int j, int isu, int jsu) {
    int f = ll.size();
    int c = ll[0].size();
    int p = par.size();
    int k = 0;
    
    while (k < p and i < f and j < c) {
        if (par[k] != ll[i][j]) return false;
        i = i + isu;
        j = j + jsu;
        ++k;
    }
    return p == k;
}

int punts(const Matriun& n, int p, int i, int j, int isu, int jsu) {
    int f = n.size();
    int c = n[0].size();
    int k = 0;
    int punts = 0;
    
    while (k < p and i < f and j < c) {
        punts = punts + n[i][j];
        i = i + isu;
        j = j + jsu;
        ++k;
    }
    return punts;
}

void sopa(const Matriuc& ll, const Matriun& n, string par, int& max) {
    int f = ll.size();
    int c = ll[0].size();
    int p = par.size();
    
    int i = 0;
    while (i < f) {
        int j = 0;
        while (j < c) {
           if (par[0] == ll[i][j]) {
               // analisi horitzontal
               if (esta(ll, par, i, j, 0, 1)) {
                   int points = punts(n, p, i, j, 0, 1);
                   if (max < points) max = points;
               }
               
               // analisi vertical
               if (esta(ll, par, i, j, 1, 0)) {
                   int points = punts(n, p, i, j, 1, 0);
                   if (max < points) max = points;
               }
           }
           ++j;
        }
        ++i;
    }
}

int main() {
    int f, c;
    while (cin >> f >> c) {
        Matriuc lletres = llegir_char(f, c);
        Matriun nombres = llegir_num(f, c);
        
        int t;
        cin >> t;
        for (int i = 0; i < t; ++i) {
            string par;
            cin >> par;
            int punts = -1;
            sopa(lletres, nombres, par, punts);
            
            if (punts == -1) cout << "no" << endl;
            else cout << punts << endl;
        }
    }
}
