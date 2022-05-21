#include <iostream>
#include <cmath>
using namespace std;

struct Punt {
    double x, y;
};

double distancia(const Punt& a, const Punt& b) {
    Punt dist;
    dist.x = a.x - b.x;
    dist.y = a.y - b.y;
    double distE = sqrt(dist.x * dist.x + dist.y * dist.y);
    return distE;
}

int main () {
    Punt a1, b1;
    cin >> a1.x >> a1.y >> b1.x >> b1.y;
    cout << distancia(a1, b1) << endl;
}
