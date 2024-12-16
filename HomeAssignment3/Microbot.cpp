/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#include "Microbot.h"

Microbot::Microbot(const std::string &name, int level, int strength, int range, int fuel, int ammo, const std::string &faction, float weight, float height)
    : Transformer(name, level, strength, range, fuel, ammo),
      faction(faction), weight(weight), height(height) {}

void Microbot::transform()
{
    std::cout << "Microbot " << name << " transforms!" << std::endl;
}

void Microbot::ultimate()
{
    std::cout << "Microbot " << name << " uses ultimate power!" << std::endl;
}

std::string Microbot::getFaction() const
{
    return faction;
}

float Microbot::getWeight() const
{
    return weight;
}

float Microbot::getHeight() const
{
    return height;
}

Microbot::~Microbot()
{
    std::cout << "Microbot destructor called for " << name << std::endl;
}

