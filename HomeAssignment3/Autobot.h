/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"
#include <string>

class Autobot : public Transformer {
private:
    std::string faction;
    float weight;
    float height;

public:
    Autobot(const std::string &name, int level, int strength, int range, int fuel, int ammo,
            const Weapon &weapon, const Shield &shield, const std::string &faction,
            float weight, float height);

    void transform();
    void ultimate();
    std::string getFaction() const;
    float getWeight() const;
    float getHeight() const;

    ~Autobot();
};

#endif
