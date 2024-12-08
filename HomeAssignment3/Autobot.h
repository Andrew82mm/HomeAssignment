/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
private:
    std::string faction;
public: 
    Autobot(const std::string &name, int level, int strength, int range, int fuel, int ammo, const Weapon &weapon, const Shield &shield, const std::string &faction);
    void transform();
    void ultimate();
    std::string getFaction() const;
};

#endif
