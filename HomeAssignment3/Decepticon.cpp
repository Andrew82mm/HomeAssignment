/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#include "Decepticon.h"

Decepticon::Decepticon(const std::string &name, int level, int strength, int range, int fuel, int ammo, 
                       const Weapon &weapon, const Shield &shield, const std::string &faction, 
                       float weight, float height)
    : Transformer(name, level, strength, range, fuel, ammo, weapon, shield), 
      faction(faction), weight(weight), height(height) {}

void Decepticon::transform() {
    std::cout << "Decepticon " << name << " transforms!" << std::endl;
}

void Decepticon::ultimate() {
    std::cout << "Decepticon " << name << " uses ultimate power!" << std::endl;
}

std::string Decepticon::getFaction() const {
    return faction;
}

float Decepticon::getWeight() const {
    return weight;
}

float Decepticon::getHeight() const {
    return height;
}

Decepticon::~Decepticon() {
    std::cout << "Decepticon destructor called for " << name << std::endl;
}
