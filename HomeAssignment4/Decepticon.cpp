#include "Decepticon.h"

Decepticon::Decepticon(const std::string &name, int level, int strength, int range, int fuel, int ammo, const Weapon &weapon, const Shield &shield, const std::string &faction)
    : Transformer(name, level, strength, range, fuel, ammo, weapon, shield), faction(faction) {}

void Decepticon::ultimate() {
    std::cout << "Decepticon " << name << " uses ultimate power!" << std::endl;
}

std::string Decepticon::getFaction() const {
    return faction;
}
std::string Decepticon::getName() const {
    return name;
}
