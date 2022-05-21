#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<bool> > Tauler;

const int MIDA = 10;

void llegir_tauler(Tauler& v) {
    
}

void imprimir_tauler(const Tauler& v) {
    cout << "  12345678910" << endl;
    for (int i = 0; i < MIDA; ++i) {
        cout << char(i+'a') << " ";
        for (int j = 0; j < MIDA; ++j) {
            if (v[i][j]) cout << "X" << endl;
            else cout << "." << endl;
        }
        cout << endl;
    }
}

int main() {
    Tauler t(10, vector<bool>(10, false));
    llegir_tauler(t);
    
    
    
}
