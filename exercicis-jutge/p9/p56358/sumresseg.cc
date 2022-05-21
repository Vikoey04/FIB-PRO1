#include <iostream>
using namespace std;

struct Temps {
    int hora, minut, segon;
};

void un_segon(const Temps& t, Temps& t1, Temps& t2) {
    t1 = t;
    ++t1.segon;
    if (t1.segon == 60) {
        t1.segon = 0;
        ++t1.minut;
        if (t1.minut == 60) {
            t1.minut = 0;
            ++t1.hora;
            if (t1.hora == 24) t1.hora = 0;
        }
    }
    t2 = t;
    --t2.segon;
    if (t2.segon < 0) {
        t2.segon = 59;
        --t2.minut;
        if (t2.minut < 0) {
            t2.minut = 59;
            --t2.hora;
            if (t2.hora < 0) t2.hora = 23;
        }
    }
}

int main () {
    Temps a;
    while (cin >> a.hora >> a.minut >> a.segon) {
        Temps ta, tb;
        un_segon(a, ta, tb);
        cout << ta.hora << " " << ta.minut << " " << ta.segon << endl;
        cout << tb.hora << " " << tb.minut << " " << tb.segon << endl;
    }
}
