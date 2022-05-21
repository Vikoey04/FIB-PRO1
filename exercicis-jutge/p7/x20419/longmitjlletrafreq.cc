#include <iostream>
#include <vector>
using namespace std;

char lletra_mes_frequent(const string& s) {
    int a = s.size();
    vector <char> v(26,0);
    for (int i = 0; i < a; ++i) {
        v[s[i] - int('a')] = v[s[i] - int('a')] + 1;
    }
    
    int m = v[0];
    int pos = 0;
    for (int k = 1; k < 26; ++k) {
        if (v[k] > m) {
            m = v[k];
            pos = k;
        }
    }
    return char(pos + int('a'));
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int n;
    double mitjana = 0;
    string w;
    cin >> n;
    vector <string> words(n);
    vector <double> v2(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> w;
        words[i] = w;
        v2[i] = w.size();
        
        mitjana = mitjana + words[i].size();
    }
    mitjana = mitjana / n;
    cout << mitjana << endl;
    
    for (int k = 0; k < n; ++k){
        if (v2[k] >= mitjana) cout << words[k] << ": " << lletra_mes_frequent(words[k]) << endl;
    }
}
