#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string name) : Player(name) {
    setStats("Thief", 1, 120, 80, 18, 8, 10, 12);
}

void Thief::attackAction() {
    cout << job << " �� �ܰ����� �޽��ߴ�." << endl;
}
