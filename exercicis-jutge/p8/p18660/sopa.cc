#include <iostream>
#include <vector>
using namespace std;

typedef vector<string> Llista;
typedef vector< vector<char> > Matriu;

Llista llegir_paraules(int nombre) {
    Llista par(nombre);
    for (int i = 0; i < nombre; ++i) {
        cin >> par[i];
    }
    return par;
}

Matriu llegir_sopa(int x, int y) {
    Matriu sopa(x,vector<char>(y));
    for (int i = 0; i < x; ++i) {
        for (int k = 0; k < y; ++k) {
            cin >> sopa[i][k];
        }
    }
    return sopa;
}

void imprimir_sopa(const Matriu& sopadumacaco) {
    int x = sopadumacaco.size();
    int y = sopadumacaco[0].size();
    for (int i = 0; i < x; ++i) {
        for (int k = 0; k < y; ++k) {
            if(k != 0) cout << " ";
            cout << sopadumacaco[i][k];
        }
        cout << endl;
    }
}

void convertir_majuscula(Matriu& sopa, int p, int i, int j, int isu, int jsu) {
    int x = 0;
    while (x < p) {
        if (sopa[i][j] >= 'a' and sopa[i][j] <= 'z') sopa[i][j] = char(int(sopa[i][j]) - int('a') + int('A'));
        i = i + isu;
        j = j + jsu;
        ++x;
    }
}

bool esta(const Matriu& sopa, string par, int i, int j, int isu, int jsu) {
    int f = sopa.size();
    int c = sopa[0].size();
    int p = par.size();
    int k = 0;
    while (k < p and i < f and j < c) {
        if (par[k] != sopa[i][j]) return false;
        i = i + isu;
        j = j + jsu;
        ++k;
    }
    return k == p;
}

void sopa_lletres(const Matriu& aux, Matriu& sopa, const Llista& par) {
    int f = aux.size();
    int c = aux[0].size();
    int p = par.size();
    
    for (int k = 0; k < p; ++k) {
        int i = 0;
        string paraula = par[k];
        while (i < f) {
            int j = 0;
            while (j < c) {
                if (paraula[0] == aux[i][j]) {
                    int size = paraula.size();
                    //analisi horitzonal
                    if (esta(aux, paraula, i, j, 0, 1)) convertir_majuscula(sopa, size, i, j, 0, 1);
                    
                    //analisi vertical
                    if (esta(aux, paraula, i, j, 1, 0)) convertir_majuscula(sopa, size, i, j, 1, 0);
                    
                    //analisi diagonal
                    if (esta(aux, paraula, i, j, 1, 1)) convertir_majuscula(sopa, size, i, j, 1, 1);
                }
                ++j;
            }
            ++i;
        }
    }
}

int main() {
    int x, m, n;
    bool primer = true;
    while(cin >> x >> m >> n) {
        Llista paraules = llegir_paraules(x);
        Matriu sopar = llegir_sopa(m, n);
        Matriu auxi = sopar;
        
        sopa_lletres(auxi, sopar, paraules);
        
        if (not primer) cout << endl;
        else primer = false;
        imprimir_sopa(sopar);
    }
}
