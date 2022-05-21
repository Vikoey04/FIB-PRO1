#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;
	bool final = false;
	bool first = false;
	bool cierto = true;
	int cont = 0;

	while (cin >> n and not final and cierto) {
		if (n == "final" and first) final = true;
		else if (n == "principi") first = true;
		else if (n == "final" and not first) cierto = false;
		else {
			if (first) ++cont;
		}
	}

	if (final) cout << cont << endl;
	else cout << "sequencia incorrecta" << endl;
}
