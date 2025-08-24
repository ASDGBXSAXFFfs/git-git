#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(string name) : nickname(name), job("None"), level(1),
hp(100), mp(50), attack(10), defense(5), accuracy(3), speed(3) {}

void Player::setStats(string j, int lv, int hp_, int mp_, int atk, int def, int acc, int spd) {
    job = j;
    level = lv;
    hp = hp_;
    mp = mp_;
    attack = atk;
    defense = def;
    accuracy = acc;
    speed = spd;
}

void Player::showStatus() {
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "����: " << job << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << hp << endl;
    cout << "MP: " << mp << endl;
    cout << "���ݷ�: " << attack << endl;
    cout << "����: " << defense << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}
