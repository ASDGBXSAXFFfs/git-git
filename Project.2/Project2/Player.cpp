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
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "직업: " << job << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << hp << endl;
    cout << "MP: " << mp << endl;
    cout << "공격력: " << attack << endl;
    cout << "방어력: " << defense << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}
