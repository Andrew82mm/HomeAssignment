#include <gtest/gtest.h>
#include "Autobot.h"
#include "Weapon.h"
#include "Shield.h"

TEST(AutobotTest, Initialization) {
    Weapon weapon("Laser", 40);
    Shield shield(100);
    Autobot autobot("Optimus", 1, 50, 10, 100, 10, weapon, shield, "Autobot");

    EXPECT_EQ(autobot.getFaction(), "Autobot");
}
