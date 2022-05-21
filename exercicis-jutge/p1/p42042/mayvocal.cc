#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    
    if (a >= 'A' and a <= 'Z') cout << "majuscula" << endl;
    if (a >= 'a' and a <= 'z') cout << "minuscula" << endl;
    
    if (a == 'a' or a == 'A' or a == 'e' or a == 'E' or a == 'i' or a == 'I' or a == 'o' or a == 'O' or a == 'u' or a == 'U') cout << "vocal" << endl;
    else cout << "consonant" << endl;
}
