#include <iostream>
using namespace std;

int main () {
    string pent, ant, act;
    cin >> pent >> ant;
    int count = 0;
    while (cin >> act) {
        if (pent == ant) ++count;
        if (ant == act) ++count;
        pent = ant;
        ant = act;
    }
    cout << count << endl;
}
