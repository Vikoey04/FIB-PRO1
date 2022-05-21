#include <iostream>
#include <vector>
using namespace std;

bool es_palindrom(const string& s) {
    int a = s.size()-1;
    int b = 0;
    while (a != 0) {
        if (s[a] != s[b]) return false;
        ++b;
        --a;
    }
    return true;
}

int main () {
    string eb;
    cin >> eb;
    bool z = es_palindrom(eb);
    cout << z << endl;
}
