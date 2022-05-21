#include <iostream>
using namespace std;

int main() {
    int dni;
    cin >> dni;
    const string data("TRWAGMYFPDXBNJZSQVHLCKE");
    cout <<  "NIF letter: " <<  data[dni%23] <<  endl;
}
