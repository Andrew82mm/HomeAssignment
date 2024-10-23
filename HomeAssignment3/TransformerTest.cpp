#include <gtest/gtest.h>
#include "Transformer.h"
#include "Weapon.h"
#include "Shield.h"

TEST(TransformerTest, Initialization) {
    Weapon weapon("Laser", 40);
    Shield shield(100);
    Transformer transformer("Optimus", 1, 50, 10, 100, 10, weapon, shield);
    
    EXPECT_EQ(transformer.getInfT(), "Transformer name: Optimus; Level: 1; Strength: 50; Range: 10; Fuel: 100; Ammo: 10");
    EXPECT_EQ(transformer.getInfW(), "Weapon name: Laser; Damage: 40");
    EXPECT_EQ(transformer.getInfSh(), "Shield durability: 100");
}

TEST(TransformerTest, MoveWithFuel) {
    Weapon weapon("Laser", 40);
    Shield shield(100);
    Transformer transformer("Optimus", 1, 50, 10, 1, 10, weapon, shield);
    
    EXPECT_TRUE(transformer.move());
    EXPECT_EQ(transformer.getFuel(), 0); 
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
