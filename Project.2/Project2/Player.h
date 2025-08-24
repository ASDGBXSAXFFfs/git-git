#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string nickname;
    std::string job;
    int level;
    int hp;
    int mp;
    int attack;
    int defense;
    int accuracy;
    int speed;

public:
    Player(std::string name);
    virtual ~Player() {}

    virtual void attackAction() = 0;

    void showStatus();
    std::string getNickname() const { return nickname; }
    std::string getJob() const { return job; }

protected:
    void setStats(std::string j, int lv, int hp_, int mp_, int atk, int def, int acc, int spd);
};

#endif
