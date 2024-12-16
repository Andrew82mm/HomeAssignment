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

class Transformer
{
protected:
    std::string name;
private:
    unsigned int level;
    unsigned int strength;
    unsigned int range;
    unsigned int fuel;
    unsigned int ammo;
    Direction direction;
public:
    Transformer(const std::string &n, int l, int s, int r, int f, int am);
    void set_dataT(int l, int s, int r, int f, int am);
    void set_direction(Direction dir);
    void get_infT() const;
    void get_full_info(const Weapon &w, const Shield &sh) const;
    bool move();
    bool turn(Direction dir);
    bool jump();
    bool fire(const Weapon &w);

    unsigned int getFuel() const;
    unsigned int getAmmo() const;
    std::string getInfT() const;

    virtual ~Transformer();

};

#endif
