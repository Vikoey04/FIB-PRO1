#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
    int a = X.size(), b = Y.size(), count = 0;
    int i = 0, k = 0;
    while (k < b and i < a) {
        if (X[i] == Y[k]) {
            ++count;
            ++i;
            ++k;
        }
        else if (X[i] < Y[k]) {
            ++i;
        }
        else if (X[i] > Y[k]) {
            ++k;
        }
    }
    return count;
}



int main () {
    int a, b;
    cin >> a >> b;
    vector<int> X(a);
    for (int i = 0; i < a; ++i) {
        cin >> X[i];
    }
    vector<int> Y(b);
    for (int i = 0; i < b; ++i) {
        cin >> Y[i];
    }
    int j = elements_comuns(X, Y);
    cout << j << endl;
}


