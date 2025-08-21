#include <iostream>
using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion) {
    *p_HPPotion = count;
    *p_MPPotion = count;
}

void recoverHP(int* hp, int* hpPotion) {
    if (*hpPotion > 0) {
        *hp += 20;
        (*hpPotion)--;
        cout << "* HP가 20 회복되었습니다. 포션이 1개 차감됩니다.\n";
        cout << "현재 HP: " << *hp << "\n";
        cout << "남은 포션 수: " << *hpPotion << "\n";
    }
    else {
        cout << "* HP 포션이 부족합니다!\n";
    }
}

void recoverMP(int* mp, int* mpPotion) {
    if (*mpPotion > 0) {
        *mp += 20;
        (*mpPotion)--;
        cout << "* MP가 20 회복되었습니다. 포션이 1개 차감됩니다.\n";
        cout << "현재 MP: " << *mp << "\n";
        cout << "남은 포션 수: " << *mpPotion << "\n";
    }
    else {
        cout << "* MP 포션이 부족합니다!\n";
    }
}

void enhanceHP(int* hp) {
    *hp *= 2;
    cout << "* HP가 2배로 증가되었습니다.\n";
    cout << "현재 HP: " << *hp << "\n";
}

void enhanceMP(int* mp) {
    *mp *= 2;
    cout << "* MP가 2배로 증가되었습니다.\n";
    cout << "현재 MP: " << *mp << "\n";
}

void useSkill(int* mp) {
    if (*mp >= 50) {
        *mp -= 50;
        cout << "* 스킬을 사용하여 MP가 50 소모되었습니다.\n";
        cout << "현재 MP: " << *mp << "\n";
    }
    else {
        cout << "* MP가 부족하여 스킬을 사용할 수 없습니다!\n";
    }
}

void useUltimate(int* mp) {
    if (*mp > 0) {
        int cost = *mp / 2; // 현재 MP의 50% 소모
        *mp -= cost;
        cout << "* 필살기를 사용했습니다! MP가 " << cost << " 소모되었습니다.\n";
        cout << "현재 MP: " << *mp << "\n";
    }
    else {
        cout << "* MP가 부족하여 필살기를 사용할 수 없습니다!\n";
    }
}

int main() {
    int status[4] = { 0, 0, 0, 0 }; // HP, MP, 공격력, 방어력
    int hpPotion = 0, mpPotion = 0;

    // HP, MP 입력 (검증)
    while (true) {
        cout << "HP와 MP를 입력해주세요: ";
        cin >> status[0] >> status[1];
        if (status[0] > 50 && status[1] > 50) break;
        cout << "* HP나 MP가 50 이하입니다. 다시 입력해주세요.\n";
    }

    // 공격력, 방어력 입력 (검증)
    while (true) {
        cout << "공격력과 방어력을 입력해주세요: ";
        cin >> status[2] >> status[3];
        if (status[2] > 0 && status[3] > 0) break;
        cout << "* 공격력이나 방어력이 0 이하입니다. 다시 입력해주세요.\n";
    }

    // 포션 지급
    setPotion(5, &hpPotion, &mpPotion);
    cout << "* 포션이 지급되었습니다. (HP, MP 포션 각 5개)\n";
    cout << "=============================================\n";

    while (true) {
        cout << "<스탯 관리 시스템>\n";
        cout << "1. HP 회복\n";
        cout << "2. MP 회복\n";
        cout << "3. HP 강화\n";
        cout << "4. MP 강화\n";
        cout << "5. 공격 스킬 사용\n";
        cout << "6. 필살기 사용 (현재 MP의 50% 소모)\n";
        cout << "7. 종료\n";
        cout << "번호를 선택해주세요: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            recoverHP(&status[0], &hpPotion);
            break;
        case 2:
            recoverMP(&status[1], &mpPotion);
            break;
        case 3:
            enhanceHP(&status[0]);
            break;
        case 4:
            enhanceMP(&status[1]);
            break;
        case 5:
            useSkill(&status[1]);
            break;
        case 6:
            useUltimate(&status[1]);
            break;
        case 7:
            cout << "시스템을 종료합니다.\n";
            return 0;
        default:
            cout << "* 잘못된 입력입니다.\n";
        }
        cout << "=============================================\n";
    }
    return 0;
}
