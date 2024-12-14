/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#include "Microbot.h"

Microbot::Microbot(const std::string &name, int level, int strength, int range, int fuel, int ammo, const Weapon &weapon, const Shield &shield, const std::string &faction)
    : Transformer(name, level, strength, range, fuel, ammo, weapon, shield), faction(faction) {}

void Microbot::transform() {
    std::cout << "Microbot " << name << " transforms!" << std::endl;
}
void Microbot::ultimate() {
    std::cout << "Microbot " << name << " uses ultimate power!" << std::endl;
}

std::string Microbot::getFaction() const {
    return faction;
}

Microbot::~Microbot() {
    std::cout << "Microbot destructor called for " << name << std::endl;
}
