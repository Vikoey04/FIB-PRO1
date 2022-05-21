#include <iostream>
using namespace std;

void factor(int n, int& f, int& q) {
	int d = 2, x = q = 0;
	while (d * d <= n) {
		x = 0;
		while (n % d == 0) {
			++x;
			n /= d;
			if (x > q) q = x, f = d;
		}
		++d;
	}
	if (q == 0) f = n, q = 1;
}

/*
int main() {
    int n, x = 0, y = 0;
    cin >> n;
    factor(n, x, y);
    cout << x << " " << y << endl;
}
*/
