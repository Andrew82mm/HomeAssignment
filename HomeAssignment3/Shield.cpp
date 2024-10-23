#include "Shield.h"

Shield::Shield(int durability) : durability(durability) {}

int Shield::getDurability() const {
    return durability;
}
