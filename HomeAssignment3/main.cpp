/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#include <iostream>
#include "Shield.h"
#include "Weapon.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Microbot.h"

int main() {
    Shield Optimus_shield(100);
    Weapon Optimus_Gun("M4A1-S", 15); 
    Autobot Optimus("Optimus", 3, 10, 100, 100, 50, Optimus_Gun, Optimus_shield, "Autobots", 3000, 5); 
    
    Optimus.get_full_info();
    Optimus.getFaction();
    Optimus.getWeight();
    Optimus.getHeight();
    Optimus.move();
    Optimus.turn(Direction::LEFT);
    Optimus.jump();
    Optimus.fire();
    Optimus.ultimate();
    Optimus.transform();
    
    std::cout << std::endl;

    Shield Megatron_shield(120);
    Weapon Megatron_Gun("M4A4", 10); 
    Decepticon Megatron("Megatron", 3, 12, 100, 120, 40, Megatron_Gun, Megatron_shield, "Decepticons", 3100, 5.1); 
    
    Megatron.get_full_info();
    Megatron.getFaction();
    Megatron.getWeight();
    Megatron.getHeight();
    Megatron.move();
    Megatron.turn(Direction::RIGHT);
    Megatron.jump();
    Megatron.fire();
    Megatron.ultimate();
    Megatron.transform();
    
    std::cout << std::endl;
    
    Shield Micron_shield(50);
    Weapon Micron_Gun("AK-47", 12); 
    Microbot Micron("Micron", 4, 22, 30, 20, 50, Micron_Gun, Micron_shield, "Microbot", 80, 1); 
    
    Micron.get_full_info();
    Micron.getFaction();
    Micron.getWeight();
    Micron.getHeight();
    Micron.move();
    Micron.turn(Direction::BACKWARD);
    Micron.jump();
    Micron.fire();
    Micron.ultimate();
    Micron.transform();

    std::cout << std::endl;
    
    return 0;
}

