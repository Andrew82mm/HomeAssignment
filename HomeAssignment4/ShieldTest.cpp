#include <gtest/gtest.h>
#include "Shield.h"

TEST(ShieldTest, Initialization) {
    Shield shield(100);
    EXPECT_EQ(shield.getDurability(), 100);
}

TEST(ShieldTest, DurabilityChange) {
    Shield shield(50);
    EXPECT_EQ(shield.getDurability(), 50);
}
