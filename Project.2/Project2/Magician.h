#ifndef MAGICIAN_H
#define MAGICIAN_H

#include "Player.h"

class Magician : public Player {
public:
    Magician(std::string name);
    void attackAction() override;
};

#endif
