#include <iostream>
using namespace std;

struct Racional {
    int num, den;
};

// Calcula el mcd de dos enters
int Mcd(int a, int b) {
    if (b == 0) return a;
    else return Mcd (b,a%b);
}

//Simplifica un nombre racional
Racional Simplifica(Racional& r) {
    int mcd = Mcd(r.num,r.den);
    Racional Res;
    Res.num = r.num/mcd;
    Res.den = r.den/mcd;
    if (Res.den < 0) {
        Res.num = -Res.num;
        Res.den = -Res.den;
    }
    return Res;
}

// Calcula la suma de dos racionals
Racional suma(Racional& r1, Racional& r2) {
    Racional r;
    r.den = r1.den * r2.den;
    r.num = r1.num*r2.den + r2.num*r1.den;
    return Simplifica(r);
}

// Calcula la multiplicacio de dos racionals
Racional mult(Racional& r1, Racional& r2) {
    Racional r;
    r.num = r1.num * r2.num;
    r.den = r1.den * r2.den;
    return Simplifica(r);
}

void imprimeix_racional(Racional x) {
    if (x.num == 0) cout << "0" << endl;
    else if (x.den == 1) cout << x.num << endl;
    else cout << x.num << "/" << x.den << endl;
}

int main () {
    Racional r1, r2;
    cin >> r1.num >> r1.den;
    imprimeix_racional(Simplifica(r1));
    string op;
    while (cin >> op) {
        if (op == "suma") {
            cin >> r2.num >> r2.den;
            r1 = suma(r1, r2);
        }
        else if (op == "resta") {
            cin >> r2.num >> r2.den;
            r2.num = -r2.num;
            r1 = suma(r1, r2);
        }
        else if (op == "multiplica") {
            cin >> r2.num >> r2.den;
            r1 = mult(r1, r2);
        }
        else if (op == "divideix") {
            cin >> r2.den >> r2.num;
            r1 = mult(r1, r2);
        }
        imprimeix_racional(r1);
    }
}
