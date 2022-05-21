#include <iostream>
using namespace std;

void suma_valor(const char& x, int& v) {
    if (x == 'a' or x == 'e') ++v;
    else if (x == 'o' or x == 's') v = v + 2;
    else if (x == 'd' or x == 'i' or x == 'n' or x == 'r') v = v + 3;
    else if (x == 'c' or x == 'l' or x == 't' or x == 'u') v = v + 4;
    else if (x == 'm' or x == 'p') v = v + 5;
    else if (x == 'k' or x == 'w') v = v + 7;
    else if (x == 'b' or x == 'j' or x == 'q' or x == 'v' or (x <= 'z' and x >= 'x') or (x >= 'f' and x <= 'h')) v = v + 6;
}

int main() {
    char letra;
    int valor = 0;
    while (cin >> letra) {
        suma_valor(letra, valor);
    }
    cout << valor << endl;
}
