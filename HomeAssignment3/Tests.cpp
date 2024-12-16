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

TEST(WeaponTest, ConstructorTest)
{
    Weapon weapon("Laser Gun", 50);
    EXPECT_EQ(weapon.getType(), "Laser Gun");
    EXPECT_EQ(weapon.getDamage(), 50);
}

TEST(ShieldTest, ConstructorTest)
{
    Shield shield(100);
    EXPECT_EQ(shield.getDurability(), 100);
}

TEST(TransformerTest, ConstructorTest)
{
    Transformer transformer("Optimus", 10, 500, 200, 100, 50);
    EXPECT_EQ(transformer.getInfT(), "Transformer name: Optimus; Level: 10; Strength: 500; Range: 200; Fuel: 100; Ammo: 50");
}

TEST(TransformerTestFull, ConstructorTest)
{
    Weapon weapon("Laser Gun", 50);
    Shield shield(100);
    Transformer transformer("Optimus", 10, 500, 200, 100, 50);
    EXPECT_EQ(transformer.getInfT(), "Transformer name: Optimus; Level: 10; Strength: 500; Range: 200; Fuel: 100; Ammo: 50");
    EXPECT_EQ(weapon.getType(), "Laser Gun");
    EXPECT_EQ(weapon.getDamage(), 50);
    EXPECT_EQ(shield.getDurability(), 100);
}

TEST(TransformerTest, MoveTest)
{
    Transformer transformer("Optimus", 10, 500, 200, 3, 50);
    EXPECT_TRUE(transformer.move());
    EXPECT_EQ(transformer.getFuel(), 2);
    transformer.move();
    transformer.move();
    EXPECT_FALSE(transformer.move());
}

TEST(TransformerTest, TurnTest)
{
    Transformer transformer("Optimus", 10, 500, 200, 100, 50);
    EXPECT_TRUE(transformer.turn(Direction::LEFT));
    EXPECT_TRUE(transformer.turn(Direction::RIGHT));
    EXPECT_TRUE(transformer.turn(Direction::FORWARD));
    EXPECT_TRUE(transformer.turn(Direction::BACKWARD));
}

TEST(TransformerTest, JumpTest)
{
    Transformer transformer("Optimus", 10, 500, 200, 3, 50);
    EXPECT_TRUE(transformer.jump());
    EXPECT_EQ(transformer.getFuel(), 2);
    transformer.jump();
    transformer.jump();
    EXPECT_FALSE(transformer.jump());
}

TEST(TransformerTest, FireTest)
{
    Weapon weapon("Laser Gun", 50);
    Transformer transformer("Optimus", 10, 500, 200, 100, 3);
    EXPECT_TRUE(transformer.fire(weapon));
    EXPECT_EQ(transformer.getAmmo(), 2);
    transformer.fire(weapon);
    transformer.fire(weapon);
    EXPECT_FALSE(transformer.fire(weapon));
}


TEST(AutobotTest, ConstructorTest)
{
    Autobot autobot("Optimus Prime", 50, 1000, 300, 200, 100, "Autobots", 250.5, 8.0);
    EXPECT_EQ(autobot.getInfT(), "Transformer name: Optimus Prime; Level: 50; Strength: 1000; Range: 300; Fuel: 200; Ammo: 100");
    EXPECT_EQ(autobot.getFaction(), "Autobots");
    EXPECT_EQ(autobot.getWeight(), 250.5);
    EXPECT_EQ(autobot.getHeight(), 8.0);
}

TEST(AutobotTest, TransformTest)
{
    Autobot autobot("Optimus Prime", 50, 1000, 300, 200, 100, "Autobots", 250.5, 8.0);
    testing::internal::CaptureStdout();
    autobot.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot Optimus Prime transforms!\n");
}

TEST(AutobotTest, UltimateTest)
{
    Autobot autobot("Optimus Prime", 50, 1000, 300, 200, 100, "Autobots", 250.5, 8.0);
    testing::internal::CaptureStdout();
    autobot.ultimate();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot Optimus Prime uses ultimate power!\n");
}

TEST(AutobotTest, GetFactionTest)
{
    Autobot autobot("Optimus Prime", 50, 1000, 300, 200, 100, "Autobots", 250.5, 8.0);
    EXPECT_EQ(autobot.getFaction(), "Autobots");
}

TEST(DecepticonTest, ConstructorTest)
{
    Decepticon decepticon("Megatron", 60, 1200, 400, 250, 150, "Decepticons", 300.0, 9.0);
    EXPECT_EQ(decepticon.getInfT(), "Transformer name: Megatron; Level: 60; Strength: 1200; Range: 400; Fuel: 250; Ammo: 150");
    EXPECT_EQ(decepticon.getFaction(), "Decepticons");
    EXPECT_EQ(decepticon.getWeight(), 300.0);
    EXPECT_EQ(decepticon.getHeight(), 9.0);
}

TEST(DecepticonTest, TransformTest)
{
    Decepticon decepticon("Megatron", 60, 1200, 400, 250, 150, "Decepticons", 300.0, 9.0);
    testing::internal::CaptureStdout();
    decepticon.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Decepticon Megatron transforms!\n");
}

TEST(DecepticonTest, UltimateTest)
{
    Decepticon decepticon("Megatron", 60, 1200, 400, 250, 150, "Decepticons", 300.0, 9.0);
    testing::internal::CaptureStdout();
    decepticon.ultimate();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Decepticon Megatron uses ultimate power!\n");
}

TEST(DecepticonTest, GetFactionTest)
{
    Decepticon decepticon("Megatron", 60, 1200, 400, 250, 150, "Decepticons", 300.0, 9.0);
    EXPECT_EQ(decepticon.getFaction(), "Decepticons");
}

TEST(MicrobotTest, ConstructorTest)
{
    Microbot microbot("Micron", 45, 800, 250, 200, 100, "Microbots", 150.0, 5.5);
    EXPECT_EQ(microbot.getInfT(), "Transformer name: Micron; Level: 45; Strength: 800; Range: 250; Fuel: 200; Ammo: 100");
    EXPECT_EQ(microbot.getFaction(), "Microbots");
    EXPECT_EQ(microbot.getWeight(), 150.0);
    EXPECT_EQ(microbot.getHeight(), 5.5);
}

TEST(MicrobotTest, TransformTest)
{
    Microbot microbot("Micron", 45, 800, 250, 200, 100, "Microbots", 150.0, 5.5);
    testing::internal::CaptureStdout();
    microbot.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Microbot Micron transforms!\n");
}

TEST(MicrobotTest, UltimateTest)
{
    Microbot microbot("Micron", 45, 800, 250, 200, 100, "Microbots", 150.0, 5.5);
    testing::internal::CaptureStdout();
    microbot.ultimate();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Microbot Micron uses ultimate power!\n");
}

TEST(MicrobotTest, GetFactionTest)
{
    Microbot microbot("Bumblebee", 45, 800, 250, 200, 100, "Microbots", 150.0, 5.5);
    EXPECT_EQ(microbot.getFaction(), "Microbots");
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
