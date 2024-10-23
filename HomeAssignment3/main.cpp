#include <iostream>
#include "Shield.h"
#include "Weapon.h"
#include "Autobot.h"
#include "Decepticon.h"

int main() {
    Shield Optimus_shield(100);
    Weapon Optimus_Gun("M4A1-S", 15); 
    Autobot Optimus("Optimus", 3, 10, 100, 100, 50, Optimus_Gun, Optimus_shield, "Autobots"); 
    
    Optimus.get_full_info();
    Optimus.move();
    Optimus.turn(Direction::LEFT);
    Optimus.jump();
    Optimus.fire();
    Optimus.transform();

    Shield Megatron_shield(120);
    Weapon Megatron_Gun("M4A4", 10); 
    Decepticon Megatron("Megatron", 3, 12, 100, 120, 40, Megatron_Gun, Megatron_shield, "Decepticons"); 
    
    Megatron.get_full_info();
    Megatron.move();
    Megatron.turn(Direction::RIGHT);
    Megatron.jump();
    Megatron.fire();
    Megatron.ultimate();

    return 0;
}
