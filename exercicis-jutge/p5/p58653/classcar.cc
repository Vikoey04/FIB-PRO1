#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) {
         cout << s << "('" << c << "') = ";
         if (b) cout << "cert" << endl;
         else cout << "fals" << endl;
}


int main () {
    char s;
    cin >> s;
    bool bra = false, lletra = false;
    if ((s >= 'a' and s <= 'z') or (s >= 'A' and s <= 'Z')) {
        bra = true;
        lletra = true;
    }
    escriu_linia (s, "lletra", bra);
    if (not lletra) {
        escriu_linia (s, "vocal", bra);
        escriu_linia (s, "consonant", bra);
        escriu_linia (s, "majuscula", bra);
        escriu_linia (s, "minuscula", bra);
        if (s >= '0' and s <= '9') bra = true;
        escriu_linia (s, "digit", bra);
    }
    else {
        bra = false;
        if (s == 'a' or s == 'A' or s == 'e' or s == 'E' or s == 'i' or s == 'I' or s == 'o' or s == 'O' or s == 'u' or s == 'U') bra = true;
        escriu_linia (s, "vocal", bra);
        escriu_linia (s, "consonant", not bra);
        bra = false;
        if (s >= 'A' and s <= 'Z') bra = true;
        escriu_linia (s, "majuscula", bra);
        if (bra) bra = false;
        else if (not bra) bra = true;
        escriu_linia (s, "minuscula", bra);
        escriu_linia (s, "digit", false);
    }
}
