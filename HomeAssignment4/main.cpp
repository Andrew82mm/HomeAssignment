#include <iostream>
#include "Shield.h"
#include "Weapon.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Transformer.h"

int main() {
    int choice;
    std::cout << "Do you want to create your own transformer (press 1) or use ready-made data presets (press 2)? ";
    std::cin >> choice;

    if (choice == 1) {

        std::string autobotName, weaponName, faction;
        int level, strength, range, fuel, ammo, weaponDamage, shieldDurability;

        std::cout << "Enter Autobot name: ";
        std::cin >> autobotName;
        std::cout << "Enter level: ";
        std::cin >> level;
        std::cout << "Enter strength: ";
        std::cin >> strength;
        std::cout << "Enter range: ";
        std::cin >> range;
        std::cout << "Enter fuel: ";
        std::cin >> fuel;
        std::cout << "Enter ammo: ";
        std::cin >> ammo;
        std::cout << "Enter weapon name: ";
        std::cin >> weaponName;
        std::cout << "Enter weapon damage: ";
        std::cin >> weaponDamage;
        std::cout << "Enter shield durability: ";
        std::cin >> shieldDurability;
        std::cout << "Enter faction: ";
        std::cin >> faction;

        Shield autobotShield(shieldDurability);
        Weapon autobotGun(weaponName, weaponDamage);
        Autobot autobot(autobotName, level, strength, range, fuel, ammo, autobotGun, autobotShield, faction);

        autobot.get_full_info();
        autobot.move();
        autobot.turn(Direction::LEFT);
        autobot.jump();
        autobot.fire();
        autobot.transform();

        std::cout << std::endl;

        std::string decepticonName;
        std::cout << "Enter Decepticon name: ";
        std::cin >> decepticonName;

        std::cout << "Enter level: ";
        std::cin >> level;
        std::cout << "Enter strength: ";
        std::cin >> strength;
        std::cout << "Enter range: ";
        std::cin >> range;
        std::cout << "Enter fuel: ";
        std::cin >> fuel;
        std::cout << "Enter ammo: ";
        std::cin >> ammo;
        std::cout << "Enter weapon name: ";
        std::cin >> weaponName;
        std::cout << "Enter weapon damage: ";
        std::cin >> weaponDamage;
        std::cout << "Enter shield durability: ";
        std::cin >> shieldDurability;
        std::cout << "Enter faction: ";
        std::cin >> faction;

        Shield decepticonShield(shieldDurability);
        Weapon decepticonGun(weaponName, weaponDamage);
        Decepticon decepticon(decepticonName, level, strength, range, fuel, ammo, decepticonGun, decepticonShield, faction);

        decepticon.get_full_info();
        decepticon.move();
        decepticon.turn(Direction::RIGHT);
        decepticon.jump();
        decepticon.fire();
        decepticon.ultimate();
        std::cout << std::endl;
        
        std::cout << "Let's compare our transformers according to the main parameters:" << std::endl;

        std::cout << "Level: ";
        if (autobot.getLevel() > decepticon.getLevel()) {
            std::cout << autobot.getName() << " is stronger than " << decepticon.getName() << " by level." << std::endl;
        } else if (autobot.getLevel() < decepticon.getLevel()) {
            std::cout << decepticon.getName() << " is stronger than " << autobot.getName() << " by level." << std::endl;
        } else {
            std::cout << autobot.getName() << " and " << decepticon.getName() << " are equally strong by level." << std::endl;
        }

        std::cout << "Strength: ";
        if (autobot.getStrength() > decepticon.getStrength()) {
            std::cout << autobot.getName() << " is stronger than " << decepticon.getName() << " by strength." << std::endl;
        } else if (autobot.getStrength() < decepticon.getStrength()) {
            std::cout << decepticon.getName() << " is stronger than " << autobot.getName() << " by strength." << std::endl;
        } else {
            std::cout << autobot.getName() << " and " << decepticon.getName() << " are equally strong by strength." << std::endl;
        }

        std::cout << "Range: ";
        if (autobot.getRange() > decepticon.getRange()) {
            std::cout << autobot.getName() << " is stronger than " << decepticon.getName() << " by range." << std::endl;
        } else if (autobot.getRange() < decepticon.getRange()) {
            std::cout << decepticon.getName() << " is stronger than " << autobot.getName() << " by range." << std::endl;
        } else {
            std::cout << autobot.getName() << " and " << decepticon.getName() << " are equally strong by range." << std::endl;
        }

    } else {
        Shield autobotShield(100);
        Weapon autobotGun("M4A1-S", 15);
        Autobot autobot("Optimus", 3, 10, 100, 100, 50, autobotGun, autobotShield, "Autobots");
        autobot.get_full_info();
        autobot.move();
        autobot.turn(Direction::LEFT);
        autobot.jump();
        autobot.fire();
        autobot.transform();

        std::cout << std::endl;

        Shield decepticonShield(120);
        Weapon decepticonGun("M4A4", 10);
        Decepticon decepticon("Megatron", 3, 12, 100, 120, 40, decepticonGun, decepticonShield, "Decepticons");
        decepticon.get_full_info();
        decepticon.move();
        decepticon.turn(Direction::RIGHT);
        decepticon.jump();
        decepticon.fire();
        decepticon.ultimate();
        std::cout << std::endl;

        std::cout << "Let's compare our transformers according to the main parameters:" << std::endl;

        std::cout << "Level: ";
        if (autobot.getLevel() > decepticon.getLevel()) {
            std::cout << autobot.getName() << " is stronger than " << decepticon.getName() << " by level." << std::endl;
        } else if (autobot.getLevel() < decepticon.getLevel()) {
            std::cout << decepticon.getName() << " is stronger than " << autobot.getName() << " by level." << std::endl;
        } else {
            std::cout << autobot.getName() << " and " << decepticon.getName() << " are equally strong by level." << std::endl;
        }

        std::cout << "Strength: ";
        if (autobot.getStrength() > decepticon.getStrength()) {
            std::cout << autobot.getName() << " is stronger than " << decepticon.getName() << " by strength." << std::endl;
        } else if (autobot.getStrength() < decepticon.getStrength()) {
            std::cout << decepticon.getName() << " is stronger than " << autobot.getName() << " by strength." << std::endl;
        } else {
            std::cout << autobot.getName() << " and " << decepticon.getName() << " are equally strong by strength." << std::endl;
        }

        std::cout << "Range: ";
        if (autobot.getRange() > decepticon.getRange()) {
            std::cout << autobot.getName() << " is stronger than " << decepticon.getName() << " by range." << std::endl;
        } else if (autobot.getRange() < decepticon.getRange()) {
            std::cout << decepticon.getName() << " is stronger than " << autobot.getName() << " by range." << std::endl;
        } else {
            std::cout << autobot.getName() << " and " << decepticon.getName() << " are equally strong by range." << std::endl;
        }
    }

    return 0;
}
