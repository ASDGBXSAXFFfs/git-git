#ifndef THIEF_H
#define THIEF_H

#include "Player.h"

class Thief : public Player {
public:
    Thief(std::string name);
    void attackAction() override;
};

#endif
