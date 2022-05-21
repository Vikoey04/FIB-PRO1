#include <iostream>
using namespace std;

// Pre: c es una lletra minuscula
// Post: retorna true si c es una vocal, false en cas contrari
bool es_vocal(char c) {
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}

// Pre: a l'entrada hi ha una sequencia de lletres minuscules
// Post: escriu les consonants en el mateix ordre en que
// apareixen a l'entrada seguides de les vocals
// en ordre invers a com apareixen a l'entrada
void consonantes_vocales() {
    char c;
    if (cin >> c) {
        if (not es_vocal(c)) {
            cout << c;
            consonantes_vocales();
        }
        else {
            consonantes_vocales();
            cout << c;
        }
    }
}

int main() {
    consonantes_vocales();
    cout << endl;
}
