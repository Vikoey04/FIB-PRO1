#include <iostream>
using namespace std;

void bin(int x) {
	int b;
	b = x / 2;
	if (b != 0) bin(b);
	cout << x-2 * b;
}

void oct(int x) {
	int o;
	o = x / 8;
	if (o != 0) oct(o);
	cout << x-8 * o;
}

void hex(int x) {
	int h;
	char c;
	h = x / 16;
	if (h != 0) hex(h);

	if ((x-16 * h) >= 10) {
		c = 'A'+(x % 16)-10;
		cout << c;
	} else cout << x-16 * h;
}

int main() {
	int x;
	while (cin >> x) {
		cout << x << " = ";
		bin(x);
		cout << ", ";
		oct(x);
		cout << ", ";
		hex(x);
		cout << endl;
	}
}
