#include <iostream>
#include <cmath>
using namespace std;

struct Punt {
    double x, y;
};

struct Cercle {
    Punt centre;
    double radi;
};

double distancia(const Punt& p1, const Punt& p2) {
    Punt dist;
    dist.x = p1.x - p2.x;
    dist.y = p1.y - p2.y;
    return sqrt(dist.x * dist.x + dist.y * dist.y);
}

void escala(Cercle& c, double esc) {
    c.radi = c.radi * esc;
}

void desplaca(Punt& p1, const Punt& p2) {
    p1.x = p1.x + p2.x;
    p1.y = p1.y + p2.y;
}

bool es_interior(const Punt& p, const Cercle& c) {
    return (distancia(p, c.centre) < c.radi);
}

int main() {
    Cercle pc;
    cin >> pc.centre.x >> pc.centre.y >> pc.radi;
    string accio;
    while (cin >> accio) {
        if (accio == "escala") {
            double esca;
            cin >> esca;
            escala(pc, esca);
        }
        else if (accio == "desplaca") {
            Punt p3;
            cin >> p3.x >> p3.y;
            desplaca(pc.centre, p3);
        }
        else if (accio == "int") {
            Punt p3;
            cin >> p3.x >> p3.y;
            es_interior(p3, pc);
        }
    }
}
