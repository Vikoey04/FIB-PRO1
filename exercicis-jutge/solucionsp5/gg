#include <iostream>
using namespace std;

bool primer(int a) {
	if (a <= 1) return false;
	for (int i = 2; i * i <= a; ++i) {
		if (a % i == 0) return false;
	}
	return true;
}

int main() {
	int x;
	while (cin >> x and primer(x)) {
		bool nextprimer = false;
		while (not nextprimer) {
			x += 1;
			nextprimer = primer(x);
		}
		cout << x << endl;
	}
}
