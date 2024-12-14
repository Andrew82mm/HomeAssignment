/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#include "Decepticon.h"

Decepticon::Decepticon(const std::string &name, int level, int strength, int range, int fuel, int ammo, const Weapon &weapon, const Shield &shield, const std::string &faction)
    : Transformer(name, level, strength, range, fuel, ammo, weapon, shield), faction(faction) {}

void Decepticon::transform() {
    std::cout << "Decepticon " << name << " transforms!" << std::endl;
}
void Decepticon::ultimate() {
    std::cout << "Decepticon " << name << " uses ultimate power!" << std::endl;
}

std::string Decepticon::getFaction() const {
    return faction;
}

Decepticon::~Decepticon() {
    std::cout << "Decepticon destructor called for " << name << std::endl;
}
