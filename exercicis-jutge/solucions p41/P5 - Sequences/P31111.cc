#include <iostream>
using namespace std;

int main() {
	char c;
	int open = 0, closed = 0;
	bool correct = true;
	while (cin >> c) {
		if (c == '(') ++open;
		else {
			++closed;
			if (closed > open) correct = false;
		}
	}
	if (correct and closed == open) cout << "si" << endl;
	else cout << "no" << endl;
}
