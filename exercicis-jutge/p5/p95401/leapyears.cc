#include <iostream>
using namespace std;

bool es_any_de_traspas (int any) {
    bool traspas = false;
    if (any % 4 == 0 and any % 100 != 0) traspas = true;
    else if (any % 100 == 0 and (any / 100) % 4 == 0) traspas = true;
    return traspas;
}

int main () {
}
