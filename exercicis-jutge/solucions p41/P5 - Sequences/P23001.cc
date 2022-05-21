#include <iostream>
#include <string>
using namespace std;

int main() {
	int seqllarg = 1, cont = 1;
	string x, d;

	cin >> x;
	while (cin >> d) {
		if (x == d) {
			cont++;
			if (seqllarg <= cont) seqllarg = cont;
		} else cont = 0;
	}
	cout << seqllarg << endl;
}
