#include <iostream>
#include <string>
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"

using namespace std;

int main() {
    string nickname;
    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;
    cout << "1. 전사\n2. 마법사\n3. 도적\n4. 궁수" << endl;
    cout << "선택: ";

    int choice;
    cin >> choice;

    Player* player = nullptr;

    switch (choice) {
    case 1: player = new Warrior(nickname); break;
    case 2: player = new Magician(nickname); break;
    case 3: player = new Thief(nickname); break;
    case 4: player = new Archer(nickname); break;
    default:
        cout << "잘못된 선택입니다." << endl;
        return 0;
    }

    player->attackAction();
    player->showStatus();

    delete player;
    return 0;
}
