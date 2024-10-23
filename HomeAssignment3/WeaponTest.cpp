#include <gtest/gtest.h>
#include "Weapon.h"

TEST(WeaponTest, Initialization) {
    Weapon weapon("Laser", 40);
    EXPECT_EQ(weapon.getType(), "Laser");
    EXPECT_EQ(weapon.getDamage(), 40);
}
