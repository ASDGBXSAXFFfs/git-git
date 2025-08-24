#include <iostream>
#include <string>
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"

using namespace std;

int main() {
    string nickname;
    cout << "* �г����� �Է����ּ���: ";
    cin >> nickname;

    cout << "<���� �ý���>" << endl;
    cout << nickname << "��, ȯ���մϴ�!" << endl;
    cout << "* ���Ͻô� ������ �������ּ���." << endl;
    cout << "1. ����\n2. ������\n3. ����\n4. �ü�" << endl;
    cout << "����: ";

    int choice;
    cin >> choice;

    Player* player = nullptr;

    switch (choice) {
    case 1: player = new Warrior(nickname); break;
    case 2: player = new Magician(nickname); break;
    case 3: player = new Thief(nickname); break;
    case 4: player = new Archer(nickname); break;
    default:
        cout << "�߸��� �����Դϴ�." << endl;
        return 0;
    }

    player->attackAction();
    player->showStatus();

    delete player;
    return 0;
}
