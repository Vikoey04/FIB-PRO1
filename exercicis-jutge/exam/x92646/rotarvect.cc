#include <iostream>
#include <vector>
using namespace std;

// reads the  contents of an integer vector of size n  from cin
vector<int> read_vector(int n) {
     vector<int> v(n);
     for (int i = 0; i < n; ++i) 
         cin >> v[i];
     return v;
}

void swap(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
}

// reverses a vector in the segment between from and to
void reverse(vector<int>& v, int from, int to) {
    int y = (from + to)/2;
    for (int i = from; i <= y; ++i) {
        swap(v[i], v[to]);
        --to;
    }
}


// rotates the vector as explained in the statement of the problem
void rotate_right(vector<int>& v, int k) {
    int sizeb = v.size() - 1;
    int size = sizeb/2;
    for (int i = 0; i <= size; ++i) {
        swap(v[i], v[sizeb]);
        --sizeb;
    }
    reverse(v, 0, k-1);
    reverse(v, k, v.size()-1);
}

// write a vector of n integers to cout, with blanks to separate 
// the n values
void write_vector(const vector<int>& v) {
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        if (i != 0) cout << " ";
        cout << v[i];
    }
}

int main() {
    int n; cin >> n;
    vector<int> v = read_vector(n); 
    int k; cin >> k;
    rotate_right(v, k);
    write_vector(v); cout << endl;
} 
