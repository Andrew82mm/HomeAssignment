/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#include "Shield.h"

Shield::Shield(int durability) : durability(durability) {}

int Shield::getDurability() const {
    return durability;
}
Shield::~Shield() {}
