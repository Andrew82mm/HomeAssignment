/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>
#include "Direction.h"
#include "Shield.h"
#include "Weapon.h"

class Transformer {
protected:
    std::string name;
private:
    unsigned int level;
    unsigned int strength;
    unsigned int range;
    unsigned int fuel;
    unsigned int ammo;
    Weapon weapon;
    Shield shield;
public:
    Transformer(const std::string &n, int l, int s, int r, int f, int am, const Weapon &w, const Shield &sh);
    void set_dataT(int l, int s, int r, int f, int am);
    void set_dataW(const std::string& weaponName, int weaponDamage);
    void set_dataSh(int shielddurability);
    void get_infT() const;
    void get_infW() const;
    void get_infSh() const;
    void get_full_info() const;
    bool move();
    bool turn(Direction dir);
    bool jump();
    bool fire();

    unsigned int getFuel() const;
    unsigned int getAmmo() const;
    std::string getInfT() const;
    std::string getInfW() const;
    std::string getInfSh() const;
};

#endif
