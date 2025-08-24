#ifndef ARCHER_H
#define ARCHER_H

#include "Player.h"

class Archer : public Player {
public:
    Archer(std::string name);
    void attackAction() override;
};

#endif
