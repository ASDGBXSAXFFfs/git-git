#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string name) : Player(name) {
    setStats("Warrior", 1, 150, 100, 15, 10, 5, 5);
}

void Warrior::attackAction() {
    cout << job << " 가 검으로 공격했다." << endl;
}
