/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
private:
    std::string faction;
public: 
    Decepticon(const std::string &name, int level, int strength, int range, int fuel, int ammo, const Weapon &weapon, const Shield &shield, const std::string &faction);
    void transform();
    void ultimate();
    std::string getFaction() const;
};

#endif
