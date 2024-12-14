/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#include "Autobot.h"

Autobot::Autobot(const std::string &name, int level, int strength, int range, int fuel, int ammo, const Weapon &weapon, const Shield &shield, const std::string &faction)
    : Transformer(name, level, strength, range, fuel, ammo, weapon, shield), faction(faction) {}

void Autobot::transform() {
    std::cout << "Autobot " << name << " transforms!" << std::endl;
}
void Autobot::ultimate() {
    std::cout << "Autobot " << name << " uses ultimate power!" << std::endl;
}

std::string Autobot::getFaction() const {
    return faction;
}

Autobot::~Autobot() {
    std::cout << "Autobot destructor called for " << name << std::endl;
}
