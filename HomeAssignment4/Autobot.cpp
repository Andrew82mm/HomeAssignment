/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#include "Autobot.h"

Autobot::Autobot(const std::string &name, int level, int strength, int range, int fuel, int ammo,
                 const Weapon &weapon, const Shield &shield, const std::string &faction,
                 float weight, float height)
    : Transformer(name, level, strength, range, fuel, ammo, weapon, shield),
      faction(faction), weight(weight), height(height) {}

void Autobot::transform()
{
    std::cout << "Autobot " << name << " transforms!" << std::endl;
}

void Autobot::ultimate()
{
    std::cout << "Autobot " << name << " uses ultimate power!" << std::endl;
}

std::string Autobot::getFaction() const
{
    return faction;
}

float Autobot::getWeight() const
{
    return weight;
}

float Autobot::getHeight() const
{
    return height;
}

Autobot::~Autobot()
{
    std::cout << "Autobot destructor called for " << name << std::endl;
}

bool Autobot::operator==(const Autobot &other) const
{
    return name == other.name && weight == other.weight && height == other.height && faction == other.faction;
}

bool Autobot::operator!=(const Autobot &other) const
{
    return !(*this == other);
}

bool Autobot::operator<(const Autobot &other) const
{
    return strength < other.strength;
}

bool Autobot::operator>(const Autobot &other) const
{
    return strength > other.strength;
}

bool Autobot::operator<=(const Autobot &other) const
{
    return !(*this > other);
}

bool Autobot::operator>=(const Autobot &other) const
{
    return !(*this < other);
}
