/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#ifndef MICROBOT_H
#define MICROBOT_H

#include "Transformer.h"

class Microbot : public Transformer
{
private:
    std::string faction;
    float weight;
    float height;
public:
    Microbot(const std::string &name, int level, int strength, int range, int fuel, int ammo, const Weapon &weapon, const Shield &shield, const std::string &faction, float weight, float height);
    ~Microbot() override;
    void transform();
    void ultimate();
    std::string getFaction() const;
    float getWeight() const;
    float getHeight() const;
};

#endif
