#include <iostream>
#include <vector>
using namespace std;

// Llegeix vector enters
vector<int> llegir_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    return v;
}

// Pre: v valid
// Post: retorna v ordenat ascendentment segons l'operador <
void ordenacion_insercion(vector<int>& v) {
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        int x = v[i];
        int j = i;
        while (j > 0 and v[j - 1] > v[j]) {
            v[j] = v[j - 1];
            --j;
        }
        v[j] = x;
    }
}

// Imprimeix el vector
void imprimir_vector(const vector<int>& v) {
    int n = v.size();
    cout << v[0];
    for (int i = 1; i < n; ++i) {
        cout << " " << v[i];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> v = llegir_vector(n);
    ordenacion_insercion(v);
    imprimir_vector(v);
}
