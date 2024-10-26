#include "Shield.h"

Shield::Shield(int durability) : durability(durability) {}
Shield::Shield() {}


int Shield::getDurability() const {
    return durability;
}
