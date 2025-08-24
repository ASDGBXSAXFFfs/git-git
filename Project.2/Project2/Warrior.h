#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"

class Warrior : public Player {
public:
    Warrior(std::string name);
    void attackAction() override;
};

#endif
