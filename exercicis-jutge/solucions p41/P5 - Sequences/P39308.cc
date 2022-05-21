#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, div;
	while (cin >> n) {
		cout << "divisors de " << n << ':';
		div = 1;
		while (div <= sqrt(n)) {
			if (n % div == 0) cout << ' ' << div;
			++div;
		}
		for (int i = sqrt(n); i > 0; --i) {
			if ((n % i == 0) and (i != n / i)) cout << ' ' << n / i;
		}
		cout << endl;
	}
}
