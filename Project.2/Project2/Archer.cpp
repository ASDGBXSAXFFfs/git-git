#include "Archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string name) : Player(name) {
    setStats("Archer", 1, 110, 120, 17, 7, 15, 10);
}

void Archer::attackAction() {
    cout << job << " 가 활로 공격했다." << endl;
}
