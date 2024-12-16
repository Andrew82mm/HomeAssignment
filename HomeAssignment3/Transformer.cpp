/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#include "Transformer.h"

Transformer::Transformer(const std::string &n, int l, int s, int r, int f, int am)
    : name(n), level(l), strength(s), range(r), fuel(f), ammo(am)
{
    std::cout << "The transformer parameters are set" << std::endl;
}

void Transformer::set_dataT(int l, int s, int r, int f, int am)
{
    level = l;
    strength = s;
    range = r;
    fuel = f;
    ammo = am;
}

void Transformer::set_direction(Direction dir)
{
    direction = dir;
}

void Transformer::get_infT() const
{
    std::cout << "Transformer name: " << name << "; Level: " << level
              << "; Strength: " << strength << "; Range: " << range
              << "; Fuel: " << fuel << "; Ammo: " << ammo << std::endl;
}

void Transformer::get_full_info(const Weapon &w, const Shield &sh) const
{
    get_infT();
    std::cout << "Weapon name: " << w.getType() << "; Damage: " << w.getDamage() << std::endl;
    std::cout << "Shield durability: " << sh.getDurability() << std::endl;
}

bool Transformer::move()
{
    if (fuel > 0)
    {
        fuel--;
        std::cout << name << " moves." << std::endl;
        return true;
    }
    else
    {
        std::cout << name << " has no fuel to move." << std::endl;
        return false;
    }
}

bool Transformer::turn(Direction dir)
{
    set_direction(dir);
    std::string direction_str;
    switch (direction)
    {
    case Direction::LEFT:
        direction_str = "left";
        break;
    case Direction::RIGHT:
        direction_str = "right";
        break;
    case Direction::FORWARD:
        direction_str = "forward";
        break;
    case Direction::BACKWARD:
        direction_str = "backward";
        break;
    }
    std::cout << name << " turns " << direction_str << "." << std::endl;
    return true;
}

bool Transformer::jump()
{
    if (fuel > 0)
    {
        fuel--;
        std::cout << name << " jumps." << std::endl;
        return true;
    }
    else
    {
        std::cout << name << " has no fuel to jump." << std::endl;
        return false;
    }
}

bool Transformer::fire(const Weapon &w)
{
    if (ammo > 0)
    {
        ammo--;
        std::cout << name << " fires with " << w.getType() << "." << std::endl;
        return true;
    }
    else
    {
        std::cout << name << " has no ammo to fire." << std::endl;
        return false;
    }
}

unsigned int Transformer::getFuel() const
{
    return fuel;
}

unsigned int Transformer::getAmmo() const
{
    return ammo;
}

std::string Transformer::getInfT() const
{
    return "Transformer name: " + name + "; Level: " + std::to_string(level) +
           "; Strength: " + std::to_string(strength) + "; Range: " + std::to_string(range) +
           "; Fuel: " + std::to_string(fuel) + "; Ammo: " + std::to_string(ammo);
}

Transformer::~Transformer()
{
}




