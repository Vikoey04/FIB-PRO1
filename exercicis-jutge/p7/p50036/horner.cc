#include <iostream>
#include <vector>
using namespace std;

int avalua(const vector<int>& p, int x) {
    int a = p.size(), result = p[0], aux = x;
    for (int i = 1; i < a; ++i) {
        result = result + p[i] * x;
        x = x * aux;
    }
    return result;
}

int main () {
    vector<int> e(4);
    int x = 3;
    for (int i = 0; i < 4; ++i) {
        cin >> e[i];
    }
    cout << avalua(e, x) << endl;
}
