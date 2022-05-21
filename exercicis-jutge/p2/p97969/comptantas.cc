#include <iostream>
using namespace std;

int main() {
    string charlie;
    int as = 0;
    getline(cin, charlie);
    
    for (int i = 0; i < charlie.size(); i++) {
        if (charlie.at(i) == 'a') {
            as = as + 1;
        }
    }
    
    cout << as << endl;
}
