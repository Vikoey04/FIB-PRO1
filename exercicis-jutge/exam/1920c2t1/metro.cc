#include <iostream>
using namespace std;

// Pre: Dos enters entre 0 i 59 (ambdós inclosos)
// Post: Diferència entre els dos enters
int time_lapse(int time_1, int time_2) {
    if (time_1 > time_2) {
        return time_2 + 60 - time_1;
    }
    else if (time_1 == time_2) {
        return 60;
    }
    else return time_2 - time_1;
}

int main() {
    int x, y;
    cin >> x >> y;
    int time = time_lapse(x, y);
    bool metro = true;
    
    x = y;
    cin >> y;
    while (metro and y != -1) {
        if (time != time_lapse(x, y)) {
           metro = false; 
        }
        x = y;
        cin >> y;
    }
    
    if (metro) cout << time << endl;
    else cout << "0" << endl;
}
