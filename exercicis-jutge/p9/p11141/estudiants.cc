#include <iostream>
#include <vector>
using namespace std;

struct Estudiant {
    int dni;
    string nom;
    double nota;
    bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {
    int n = es.size(), norepe = 0;
    min = 10, max = 0, mitj = 0;
    bool presentat = false;
    for (int i = 0; i < n; ++i) {
        if (not es[i].repetidor) {
            double nota = es[i].nota;
            if (nota >= 0) {
                presentat = true;
                mitj = mitj + nota;
                if (nota > max) max = nota;
                if (nota < min) min = nota;
                ++norepe;
            }
        }
    }
    if (not presentat) {
        min = -1;
        max = -1;
        mitj = -1;
    }
    else mitj = mitj / norepe;
    
}

int main () {
    vector<Estudiant> estudiantat(6);
    for (int i = 0; i < 6; ++i) {
        cin >> estudiantat[i].nota;
        int repe;
        cin >> repe;
        estudiantat[i].repetidor = bool(repe);
    }
    double min = 10, max = 0, mitj = 0;
    informacio(estudiantat, min, max, mitj);
    cout << min << " " << max << " " << mitj << endl;
}
