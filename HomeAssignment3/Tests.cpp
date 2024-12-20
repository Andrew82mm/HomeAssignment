/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#include <gtest/gtest.h>
#include "Transformer.h"
#include "Weapon.h"
#include "Shield.h"
#include "Direction.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Microbot.h"

TEST(WeaponTest, ConstructorTest) {
    Weapon weapon("Laser Gun", 50);
    EXPECT_EQ(weapon.getType(), "Laser Gun");
    EXPECT_EQ(weapon.getDamage(), 50);
}

TEST(ShieldTest, ConstructorTest) {
    Shield shield(100);
    EXPECT_EQ(shield.getDurability(), 100);
}

TEST(TransformerTest, ConstructorTest) {
    Weapon weapon("Laser Gun", 50);
    Shield shield(100);
    Transformer transformer("Optimus", 10, 500, 200, 100, 50, &weapon, shield);
    EXPECT_EQ(transformer.getInfT(), "Transformer name: Optimus; Level: 10; Strength: 500; Range: 200; Fuel: 100; Ammo: 50");
    EXPECT_EQ(transformer.getInfW(), "Weapon name: Laser Gun; Damage: 50");
    EXPECT_EQ(transformer.getInfSh(), "Shield durability: 100");
}

TEST(TransformerTest, SetDataTest) {
    Weapon weapon("Laser Gun", 50);
    Shield shield(100);
    Transformer transformer("Optimus", 10, 500, 200, 100, 50, &weapon, shield);
    transformer.set_dataT(20, 600, 250, 120, 60);
    transformer.set_dataW("Plasma Cannon", 80);
    transformer.set_dataSh(120);
    EXPECT_EQ(transformer.getInfT(), "Transformer name: Optimus; Level: 20; Strength: 600; Range: 250; Fuel: 120; Ammo: 60");
    EXPECT_EQ(transformer.getInfW(), "Weapon name: Plasma Cannon; Damage: 80");
    EXPECT_EQ(transformer.getInfSh(), "Shield durability: 120");
}

TEST(TransformerTest, MoveTest) {
    Weapon weapon("Laser Gun", 50);
    Shield shield(100);
    Transformer transformer("Optimus", 10, 500, 200, 3, 50, &weapon, shield);
    EXPECT_TRUE(transformer.move());
    EXPECT_EQ(transformer.getFuel(), 2);
    transformer.move();
    transformer.move();
    EXPECT_FALSE(transformer.move());
}

TEST(TransformerTest, TurnTest) {
    Weapon weapon("Laser Gun", 50);
    Shield shield(100);
    Transformer transformer("Optimus", 10, 500, 200, 100, 50, &weapon, shield);
    EXPECT_TRUE(transformer.turn(Direction::LEFT));
    EXPECT_TRUE(transformer.turn(Direction::RIGHT));
    EXPECT_TRUE(transformer.turn(Direction::FORWARD));
    EXPECT_TRUE(transformer.turn(Direction::BACKWARD));
}

TEST(TransformerTest, JumpTest) {
    Weapon weapon("Laser Gun", 50);
    Shield shield(100);
    Transformer transformer("Optimus", 10, 500, 200, 3, 50, &weapon, shield);
    EXPECT_TRUE(transformer.jump());
    EXPECT_EQ(transformer.getFuel(), 2);
    transformer.jump();
    transformer.jump();
    EXPECT_FALSE(transformer.jump());
}

TEST(TransformerTest, FireTest) {
    Weapon weapon("Laser Gun", 50);
    Shield shield(100);
    Transformer transformer("Optimus", 10, 500, 200, 100, 3, &weapon, shield);
    EXPECT_TRUE(transformer.fire());
    EXPECT_EQ(transformer.getAmmo(), 2);
    transformer.fire();
    transformer.fire();
    EXPECT_FALSE(transformer.fire());
}

TEST(AutobotTest, ConstructorTest) {
    Weapon weapon("Plasma Cannon", 80);
    Shield shield(120);
    Autobot autobot("Optimus Prime", 50, 1000, 300, 200, 100, &weapon, shield, "Autobots");
    EXPECT_EQ(autobot.getInfT(), "Transformer name: Optimus Prime; Level: 50; Strength: 1000; Range: 300; Fuel: 200; Ammo: 100");
    EXPECT_EQ(autobot.getInfW(), "Weapon name: Plasma Cannon; Damage: 80");
    EXPECT_EQ(autobot.getInfSh(), "Shield durability: 120");
    EXPECT_EQ(autobot.getFaction(), "Autobots");
}

TEST(AutobotTest, TransformTest) {
    Weapon weapon("Plasma Cannon", 80);
    Shield shield(120);
    Autobot autobot("Optimus Prime", 50, 1000, 300, 200, 100, &weapon, shield, "Autobots");
    testing::internal::CaptureStdout();
    autobot.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot Optimus Prime transforms!\n");
}

TEST(AutobotTest, UltimateTest) {
    Weapon weapon("Plasma Cannon", 80);
    Shield shield(120);
    Autobot autobot("Optimus Prime", 50, 1000, 300, 200, 100, &weapon, shield, "Autobots");
    testing::internal::CaptureStdout();
    autobot.ultimate();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot Optimus Prime uses ultimate power!\n");
}

TEST(AutobotTest, GetFactionTest) {
    Weapon weapon("Plasma Cannon", 80);
    Shield shield(120);
    Autobot autobot("Optimus Prime", 50, 1000, 300, 200, 100, &weapon, shield, "Autobots");
    EXPECT_EQ(autobot.getFaction(), "Autobots");
}

TEST(DecepticonTest, ConstructorTest) {
    Weapon weapon("Fusion Cannon", 100);
    Shield shield(150);
    Decepticon decepticon("Megatron", 60, 1200, 400, 250, 150, &weapon, shield, "Decepticons");
    EXPECT_EQ(decepticon.getInfT(), "Transformer name: Megatron; Level: 60; Strength: 1200; Range: 400; Fuel: 250; Ammo: 150");
    EXPECT_EQ(decepticon.getInfW(), "Weapon name: Fusion Cannon; Damage: 100");
    EXPECT_EQ(decepticon.getInfSh(), "Shield durability: 150");
    EXPECT_EQ(decepticon.getFaction(), "Decepticons");
}

TEST(DecepticonTest, TransformTest) {
    Weapon weapon("Fusion Cannon", 100);
    Shield shield(150);
    Decepticon decepticon("Megatron", 60, 1200, 400, 250, 150, &weapon, shield, "Decepticons");
    testing::internal::CaptureStdout();
    decepticon.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Decepticon Megatron transforms!\n");
}

TEST(DecepticonTest, UltimateTest) {
    Weapon weapon("Fusion Cannon", 100);
    Shield shield(150);
    Decepticon decepticon("Megatron", 60, 1200, 400, 250, 150, &weapon, shield, "Decepticons");
    testing::internal::CaptureStdout();
    decepticon.ultimate();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Decepticon Megatron uses ultimate power!\n");
}

TEST(DecepticonTest, GetFactionTest) {
    Weapon weapon("Fusion Cannon", 100);
    Shield shield(150);
    Decepticon decepticon("Megatron", 60, 1200, 400, 250, 150, &weapon, shield, "Decepticons");
    EXPECT_EQ(decepticon.getFaction(), "Decepticons");
}

TEST(MicrobotTest, ConstructorTest) {
    Weapon weapon("Plasma Gun", 75);
    Shield shield(100);
    Microbot microbot("Micron", 45, 800, 250, 200, 100, &weapon, shield, "Microbots");
    EXPECT_EQ(microbot.getInfT(), "Transformer name: Micron; Level: 45; Strength: 800; Range: 250; Fuel: 200; Ammo: 100");
    EXPECT_EQ(microbot.getInfW(), "Weapon name: Plasma Gun; Damage: 75");
    EXPECT_EQ(microbot.getInfSh(), "Shield durability: 100");
    EXPECT_EQ(microbot.getFaction(), "Microbots");
}

TEST(MicrobotTest, TransformTest) {
    Weapon weapon("Plasma Gun", 75);
    Shield shield(100);
    Microbot microbot("Micron", 45, 800, 250, 200, 100, &weapon, shield, "Microbots");
    testing::internal::CaptureStdout();
    microbot.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Microbot Micron transforms!\n");
}

TEST(MicrobotTest, UltimateTest) {
    Weapon weapon("Plasma Gun", 75);
    Shield shield(100);
    Microbot microbot("Micron", 45, 800, 250, 200, 100, &weapon, shield, "Microbots");
    testing::internal::CaptureStdout();
    microbot.ultimate();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Microbot Micron uses ultimate power!\n");
}

TEST(MicrobotTest, GetFactionTest) {
    Weapon weapon("Plasma Gun", 75);
    Shield shield(100);
    Microbot microbot("Bumblebee", 45, 800, 250, 200, 100, &weapon, shield, "Microbots");
    EXPECT_EQ(microbot.getFaction(), "Microbots");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
