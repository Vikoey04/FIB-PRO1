#include <iostream>
#include <vector>
using namespace std;

struct Player {
    string name;
    double score;
    // mitjana anotadora
};

struct Team {
    string tname;
    Player mvp;
    // jugador millor valorat
};

typedef vector<Team> League;

League read_data(League& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cin >> v[i].tname >> v[i].mvp.name >> v[i].mvp.score;
    }
    return v;
}

void comprovar(Team team, char c, double s) {
    if (c == team.tname[0]) {
        if (team.mvp.score > s) cout << team.mvp.name << endl;
    }
}

int main() {
    int n;
    while (cin >> n) {
        League lliga(n);
        lliga = read_data(lliga);
        
        char c;
        double s;
        while (cin >> c >> s) {
            cout << "-- begin query" << endl;
            for (int j = 0; j < n; ++j) {
                comprovar(lliga[j], c, s);
            }
            cout << "-- end query" << endl;
        }
    }
}
