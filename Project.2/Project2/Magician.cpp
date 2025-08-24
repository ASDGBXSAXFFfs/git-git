#include "Magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string name) : Player(name) {
    setStats("Magician", 1, 100, 200, 20, 5, 7, 4);
}

void Magician::attackAction() {
    cout << job << " 가 마법을 시전했다." << endl;
}
