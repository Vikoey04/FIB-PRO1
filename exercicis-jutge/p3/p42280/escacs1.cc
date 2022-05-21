#include <iostream>
using namespace std;

int main () {
    int f, c;
    cin >> f >> c;
    int coins = 0;
    char num;
    for (int i = 0; i < (f * c); ++i) {
        cin >> num;
        coins = coins + int(num) - int('0');
    }
    cout << coins << endl;
}
