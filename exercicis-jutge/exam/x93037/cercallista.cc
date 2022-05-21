#include <iostream>
#include <vector>
using namespace std;

bool es_menor(string a, string b) {
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

//pre:  v esta ordenat segons la mida dels strings, si tenen s'ordenen
//      lexicograficament la mateixa llargada.Todos los strings son diferentes.   
//post: retorna la posicion de s en v. 
//      Si s no esta en v, retorna -1 
int effi_search(const vector<string>& v, const string& s) {
    int i = 0;
    int x = v.size();
    while (i < x) {
        int mid = (i + x)/2;
        if (v[mid] == s) return mid;
        else if (es_menor(v[mid], s)) i = mid + 1;
        else x = mid;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    string s;
    while (cin >> s) 
        cout << effi_search(v, s) << endl;
}
