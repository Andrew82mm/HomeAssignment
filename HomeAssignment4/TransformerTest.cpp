#include <gtest/gtest.h>
#include "Transformer.h"
#include "Weapon.h"
#include "Shield.h"

// Тестовая фикстура для Transformer
class TransformerTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Настройка тестовых данных
        weapon = Weapon("Laser", 50);
        shield = Shield(100);
        transformer1 = Transformer("Optimus", 5, 100, 300, 50, 10, weapon, shield);
        transformer2 = Transformer("Bumblebee", 3, 80, 250, 40, 5); // Использует значения по умолчанию
    }

    Weapon weapon;
    Shield shield;
    Transformer transformer1;
    Transformer transformer2;
};

// Тестируем конструкторы
TEST_F(TransformerTest, TestFullConstructor) {
    EXPECT_EQ(transformer1.getName(), "Optimus");
    EXPECT_EQ(transformer1.getLevel(), 5);
    EXPECT_EQ(transformer1.getStrength(), 100);
}

TEST_F(TransformerTest, TestDefaultConstructor) {
    EXPECT_EQ(transformer2.getName(), "Bumblebee");
    EXPECT_EQ(transformer2.getLevel(), 3);
    EXPECT_EQ(transformer2.getStrength(), 80);
}

// Тестируем перегруженные методы set_dataT
TEST_F(TransformerTest, TestSetDataT) {
    transformer1.set_dataT(10, 150);
    EXPECT_EQ(transformer1.getLevel(), 10);
    EXPECT_EQ(transformer1.getStrength(), 150);
}

// Тестируем перегруженные методы set_dataW
TEST_F(TransformerTest, TestSetDataW) {
    transformer1.set_dataW("Rocket", 70);
    EXPECT_EQ(transformer1.getInfW(), "Weapon name: Rocket; Damage: 70");
}

TEST_F(TransformerTest, TestSetDataWObject) {
    Weapon newWeapon("Cannon", 90);
    transformer1.set_dataW(newWeapon);
    EXPECT_EQ(transformer1.getInfW(), "Weapon name: Cannon; Damage: 90");
}

// Тестируем перегруженные методы set_dataSh
TEST_F(TransformerTest, TestSetDataSh) {
    transformer1.set_dataSh(150);
    EXPECT_EQ(transformer1.getInfSh(), "Shield durability: 150");
}

TEST_F(TransformerTest, TestSetDataShObject) {
    Shield newShield(200);
    transformer1.set_dataSh(newShield);
    EXPECT_EQ(transformer1.getInfSh(), "Shield durability: 200");
}

// Тестируем действия
TEST_F(TransformerTest, TestMove) {
    EXPECT_TRUE(transformer1.move());
    EXPECT_EQ(transformer1.getFuel(), 49); // Проверка уменьшения топлива
}

TEST_F(TransformerTest, TestFire) {
    EXPECT_TRUE(transformer1.fire());
    EXPECT_EQ(transformer1.getAmmo(), 9); // Проверка уменьшения патронов
}

TEST_F(TransformerTest, TestTurn) {
    EXPECT_TRUE(transformer1.turn(Direction::LEFT));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
