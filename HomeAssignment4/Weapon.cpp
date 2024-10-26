#include "Weapon.h"

Weapon::Weapon(const std::string& type, int damage) : type(type), damage(damage) {}
Weapon::Weapon() {}
std::string Weapon::getType() const {
    return type;
}

int Weapon::getDamage() const {
    return damage;
}
