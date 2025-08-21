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
        cout << "* HP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�.\n";
        cout << "���� HP: " << *hp << "\n";
        cout << "���� ���� ��: " << *hpPotion << "\n";
    }
    else {
        cout << "* HP ������ �����մϴ�!\n";
    }
}

void recoverMP(int* mp, int* mpPotion) {
    if (*mpPotion > 0) {
        *mp += 20;
        (*mpPotion)--;
        cout << "* MP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�.\n";
        cout << "���� MP: " << *mp << "\n";
        cout << "���� ���� ��: " << *mpPotion << "\n";
    }
    else {
        cout << "* MP ������ �����մϴ�!\n";
    }
}

void enhanceHP(int* hp) {
    *hp *= 2;
    cout << "* HP�� 2��� �����Ǿ����ϴ�.\n";
    cout << "���� HP: " << *hp << "\n";
}

void enhanceMP(int* mp) {
    *mp *= 2;
    cout << "* MP�� 2��� �����Ǿ����ϴ�.\n";
    cout << "���� MP: " << *mp << "\n";
}

void useSkill(int* mp) {
    if (*mp >= 50) {
        *mp -= 50;
        cout << "* ��ų�� ����Ͽ� MP�� 50 �Ҹ�Ǿ����ϴ�.\n";
        cout << "���� MP: " << *mp << "\n";
    }
    else {
        cout << "* MP�� �����Ͽ� ��ų�� ����� �� �����ϴ�!\n";
    }
}

void useUltimate(int* mp) {
    if (*mp > 0) {
        int cost = *mp / 2; // ���� MP�� 50% �Ҹ�
        *mp -= cost;
        cout << "* �ʻ�⸦ ����߽��ϴ�! MP�� " << cost << " �Ҹ�Ǿ����ϴ�.\n";
        cout << "���� MP: " << *mp << "\n";
    }
    else {
        cout << "* MP�� �����Ͽ� �ʻ�⸦ ����� �� �����ϴ�!\n";
    }
}

int main() {
    int status[4] = { 0, 0, 0, 0 }; // HP, MP, ���ݷ�, ����
    int hpPotion = 0, mpPotion = 0;

    // HP, MP �Է� (����)
    while (true) {
        cout << "HP�� MP�� �Է����ּ���: ";
        cin >> status[0] >> status[1];
        if (status[0] > 50 && status[1] > 50) break;
        cout << "* HP�� MP�� 50 �����Դϴ�. �ٽ� �Է����ּ���.\n";
    }

    // ���ݷ�, ���� �Է� (����)
    while (true) {
        cout << "���ݷ°� ������ �Է����ּ���: ";
        cin >> status[2] >> status[3];
        if (status[2] > 0 && status[3] > 0) break;
        cout << "* ���ݷ��̳� ������ 0 �����Դϴ�. �ٽ� �Է����ּ���.\n";
    }

    // ���� ����
    setPotion(5, &hpPotion, &mpPotion);
    cout << "* ������ ���޵Ǿ����ϴ�. (HP, MP ���� �� 5��)\n";
    cout << "=============================================\n";

    while (true) {
        cout << "<���� ���� �ý���>\n";
        cout << "1. HP ȸ��\n";
        cout << "2. MP ȸ��\n";
        cout << "3. HP ��ȭ\n";
        cout << "4. MP ��ȭ\n";
        cout << "5. ���� ��ų ���\n";
        cout << "6. �ʻ�� ��� (���� MP�� 50% �Ҹ�)\n";
        cout << "7. ����\n";
        cout << "��ȣ�� �������ּ���: ";

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
            cout << "�ý����� �����մϴ�.\n";
            return 0;
        default:
            cout << "* �߸��� �Է��Դϴ�.\n";
        }
        cout << "=============================================\n";
    }
    return 0;
}
