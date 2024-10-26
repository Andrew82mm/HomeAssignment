#include "Transformer.h"
#include <string>

Transformer::Transformer(const std::string &n, int l, int s, int r, int f, int am, const Weapon &w, const Shield &sh)
    : name(n), level(l), strength(s), range(r), fuel(f), ammo(am), weapon(w), shield(sh) {
    std::cout << "The transformer parameters are set" << std::endl;
}

Transformer::Transformer()
    : name("Default"), level(1), strength(10), range(5), fuel(100), ammo(10), weapon("Laser", 15), shield(100) {
    std::cout << "Default transformer created" << std::endl;
}

Transformer::Transformer(const std::string &n, int l, const Weapon &w, const Shield &sh)
    : name(n), level(l), strength(10), range(5), fuel(100), ammo(10), weapon(w), shield(sh) {
    std::cout << "Transformer created with name and level" << std::endl;
}

Transformer::Transformer(const std::string &n, int l)
    : name(n), level(l), strength(10), range(5), fuel(100), ammo(10), weapon("Laser", 15), shield(100) {
    std::cout << "Transformer created with name: " << name << " and level: " << level << std::endl;
}

void Transformer::set_dataT(int l, int s, int r, int f, int am) {
    level = l;
    strength = s;
    range = r;
    fuel = f;
    ammo = am;
}

void Transformer::set_dataT(int l, int s) {
    level = l;
    strength = s;
}

void Transformer::set_dataW(const std::string& weaponName, int weaponDamage) {
    weapon = Weapon(weaponName, weaponDamage);
}

void Transformer::set_dataW(const Weapon &w) {
    weapon = w; 
}

void Transformer::set_dataSh(int shielddurability) {
    shield = Shield(shielddurability);
}

void Transformer::set_dataSh(const Shield &sh) {
    shield = sh;
}

std::string Transformer::getName() const {
    return name;
}
int Transformer::getLevel() const {
    return level;
}
int Transformer::getStrength() const {
    return strength;
}
int Transformer::getRange() const {
    return range;
}

void Transformer::get_infT() const {
    std::cout << "Transformer name: " << name << "; Level: " << level
              << "; Strength: " << strength << "; Range: " << range
              << "; Fuel: " << fuel << "; Ammo: " << ammo << std::endl;
}

void Transformer::get_infW() const {
    std::cout << "Weapon name: " << weapon.getType() << "; Damage: " << weapon.getDamage() << std::endl;
}

void Transformer::get_infSh() const {
    std::cout << "Shield durability: " << shield.getDurability() << std::endl;
}

void Transformer::get_full_info() const {
    get_infT();
    get_infW();
    get_infSh();
}

bool Transformer::move() {
    if (fuel > 0) {
        fuel--;
        std::cout << name << " moves." << std::endl;
        return true;
    } else {
        std::cout << name << " has no fuel to move." << std::endl;
        return false;
    }
}

bool Transformer::turn(Direction dir) {
    std::string direction;
    switch (dir) {
    case Direction::LEFT:
        direction = "left";
        break;
    case Direction::RIGHT:
        direction = "right";
        break;
    case Direction::FORWARD:
        direction = "forward";
        break;
    case Direction::BACKWARD:
        direction = "backward";
        break;
    }
    std::cout << name << " turns " << direction << "." << std::endl;
    return true;
}

bool Transformer::jump() {
    if (fuel > 0) {
        fuel--;
        std::cout << name << " jumps." << std::endl;
        return true;
    } else {
        std::cout << name << " has no fuel to jump." << std::endl;
        return false;
    }
}

bool Transformer::fire() {
    if (ammo > 0) {
        ammo--;
        std::cout << name << " fires with " << weapon.getType() << "." << std::endl;
        return true;
    } else {
        std::cout << name << " has no ammo to fire." << std::endl;
        return false;
    }
}

unsigned int Transformer::getFuel() const {
    return fuel;
}

unsigned int Transformer::getAmmo() const {
    return ammo;
}

std::string Transformer::getInfT() const {
    return "Transformer name: " + name + "; Level: " + std::to_string(level) +
           "; Strength: " + std::to_string(strength) + "; Range: " + std::to_string(range) +
           "; Fuel: " + std::to_string(fuel) + "; Ammo: " + std::to_string(ammo);
}

std::string Transformer::getInfW() const {
    return "Weapon name: " + weapon.getType() + "; Damage: " + std::to_string(weapon.getDamage());
}

std::string Transformer::getInfSh() const {
    return "Shield durability: " + std::to_string(shield.getDurability());
}
