#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		cout << a;

		bool es_primer = true;
		int j = 2;
		while (es_primer and j * j <= a) {
			if (a % j == 0) es_primer = false;
			++j;
		}

		if (a > 1 and es_primer) cout << " es primer";
		else cout << " no es primer";
		cout << endl;
	}
}
