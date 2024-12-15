#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Microbot.h"
#include "Weapon.h"
#include "Shield.h"

int main()
{
    Weapon weapon1("Blaster", 100);
    Shield shield1( 50);

    Autobot autobot1("Autobot1", 1, 10, 100, 50, 30, weapon1, shield1, "Autobots", 5.5, 1.8);
    Autobot autobot2("Autobot2", 1, 12, 110, 55, 35, weapon1, shield1, "Autobots", 6.0, 1.9);
    std::cout << std::endl;
    Decepticon decepticon1("Decepticon1", 2, 15, 90, 45, 20, weapon1, shield1, "Decepticons", 6.0, 1.9);
    Decepticon decepticon2("Decepticon2", 2, 16, 95, 50, 25, weapon1, shield1, "Decepticons", 6.2, 2.0);
    std::cout << std::endl;
    Microbot microbot1("Microbot1", 3, 8, 110, 60, 40, weapon1, shield1, "Microbot", 0.5f, 0.3f);
    Microbot microbot2("Microbot2", 3, 9, 115, 65, 45, weapon1, shield1, "Microbot", 0.6f, 0.35f);
    std::cout << std::endl;

    std::cout << "Comparing Autobots:" << std::endl;
    if (autobot1 > autobot2)
    {
        std::cout << "Autobot1 is stronger than Autobot2" << std::endl;
    }
    else if (autobot1 < autobot2)
    {
        std::cout << "Autobot1 is weaker than Autobot2" << std::endl;
    }
    else
    {
        std::cout << "Autobot1 and Autobot2 have the same strength" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Comparing Decepticons:" << std::endl;
    if (decepticon1 > decepticon2)
    {
        std::cout << "Decepticon1 is stronger than Decepticon2" << std::endl;
    }
    else if (decepticon1 < decepticon2)
    {
        std::cout << "Decepticon1 is weaker than Decepticon2" << std::endl;
    }
    else
    {
        std::cout << "Decepticon1 and Decepticon2 have the same strength" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Comparing Microbots:" << std::endl;
    if (microbot1 > microbot2)
    {
        std::cout << "Microbot1 is stronger than Microbot2" << std::endl;
    }
    else if (microbot1 < microbot2)
    {
        std::cout << "Microbot1 is weaker than Microbot2" << std::endl;
    }
    else
    {
        std::cout << "Microbot1 and Microbot2 have the same strength" << std::endl;
    }
    std::cout << std::endl;

    return 0;
}

