#include <iostream>
using namespace std;

void descompon (int n, int& h, int& m, int& s) {
    m = (n / 60);
    s = n % 60;
    h = m / 60;
    if (m > 59) m = m % 60;
}

int main () {
}
