#include <iostream>
using namespace std;


void read_rational(int& num, int &den) {
    num = den = 0;
    
    bool reading_num = true;
    char c;
   
    while (cin.get(c) && c != '\n') {
        if (c == '/') reading_num = false;
        else if (reading_num) num = (c - '0') + num*10;
        else den = (c - '0') + den*10;
    }

    int num_temp = num, den_temp = den;
    while (num_temp != den_temp) {
        if (num_temp > den_temp) num_temp -= den_temp;
        else den_temp -= num_temp;
    }

    // Cualquiera de lo dos es el mcd
    num /= num_temp;
    den /= num_temp;
}

int main() {
    int x, y;
    cin >> x >> y;
    read_rational(x, y);
    cout << x << " " << y << endl;   
}
