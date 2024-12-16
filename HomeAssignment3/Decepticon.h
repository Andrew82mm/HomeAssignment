/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer
{
private:
    std::string faction;
    float weight;
    float height;
public:
    Decepticon(const std::string &name, int level, int strength, int range, int fuel, int ammo, const std::string &faction, float weight, float height);
    ~Decepticon() override;
    void transform();
    void ultimate();
    std::string getFaction() const;
    float getWeight() const;
    float getHeight() const;
};

#endif
