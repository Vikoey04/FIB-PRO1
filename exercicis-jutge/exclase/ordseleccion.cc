#include <iostream>
#include <vector>
using namespace std;

// Llegeix un vector de enters
vector<int> llegir_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    return v;
}

// Intercambia dos enters
void swap(int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}

// Pre: 0 <= from < v.size()
// Post: retorna la posicio del element menor des de from fins v.size() - 1
int pos_min(const vector<int>& v, int from) {
    int p = from;
    for (int i = from + 1; i < v.size(); ++i) {
        if (v[i] < v[p]) p = i;
    } 
    return p;
}

// Pre: v valid
// Post: v queda ordenat ascendentment segons l'operador <
void ordenacion_seleccion(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        int p_min = pos_min(v, i);
        swap(v[i], v[p_min]);
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
    int x;
    cin >> x;
    vector<int> v = llegir_vector(x);
    ordenacion_seleccion(v);
    imprimir_vector(v);
}
