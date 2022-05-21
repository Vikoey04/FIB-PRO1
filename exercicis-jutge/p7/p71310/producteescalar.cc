#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v) {
    double product = 0;
    for (int i = 0; i < u.size(); ++i){
        product = product + u[i] * v[i];
    }
    return product;
}

int main () {
    
}
