#include <gtest/gtest.h>
#include "Decepticon.h"
#include "Weapon.h"
#include "Shield.h"

TEST(DecepticonTest, Initialization) {
    Weapon weapon("Cannon", 60);
    Shield shield(150);
    Decepticon decepticon("Megatron", 2, 70, 15, 80, 5, weapon, shield, "Decepticon");

    EXPECT_EQ(decepticon.getFaction(), "Decepticon");
}
