#include <iostream>
using namespace std;

int engreixa(int x) {
	if (x < 10) return x;
	int e = engreixa(x / 10);
	int ue = e % 10;
	int d = x % 10;
	int m = max(ue, d);
	return e * 10+m;
}

int main () {
    int x;
    cin >> x;
    int engreixat = engreixa(x);
    cout << engreixat << endl;
    
}
