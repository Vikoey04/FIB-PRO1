#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
    int size = v1.size() + v2.size();
    vector<int> v(size);
    for (int i = 0; i < v1.size(); ++i) {
        v[i] = v1[i];
    }
    for (int k = v1.size(); k < v2.size()+v1.size(); ++k) {
        v[k] = v2[k-v1.size()];
    } 
    return v;
}

int main () {
    int a, b;
    cin >> a >> b;
    vector<int> v1(a);
    for (int i = 0; i < a; ++i) {
        cin >> v1[i];
    }
    vector<int> v2(b);
    for (int k = 0; k < b; ++k) {
        cin >> v2[k];
    }
    vector<int> v = concatenacio(v1, v2);
    for (int j = 0; j < a+b; ++j) {
        cout << v[j] << " ";
    }
    cout << endl;
    
}
