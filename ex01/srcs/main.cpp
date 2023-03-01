#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include <iostream>


int main()
{
    /*
    ScavTrap    scavy("scavy");

    std::cout << scavy.getName() << std::endl;
    std::cout << scavy.getHit() << std::endl;
    std::cout << scavy.getEnergy() << std::endl;
    std::cout << scavy.getAttack() << std::endl;
    


    scavy.attack("bad scavy");
    scavy.guardGate();
    scavy.takeDamage(7);
    scavy.beRepaired(3);
    scavy.takeDamage(5);

    
    scavy.attack("bad scavy");
    scavy.takeDamage(7);
    scavy.beRepaired(3);
    scavy.takeDamage(7);
    
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    for (int i = 0; i < 50; i++)
        scavy.attack("bad scavy");
    */
    ScavTrap    scavy("scavy");

    /*
    scavy.attack("bad scavy");
    scavy.takeDamage(7);
    scavy.beRepaired(3);
    scavy.takeDamage(5);

    
    scavy.attack("bad scavy");
    scavy.takeDamage(7);
    scavy.beRepaired(3);
    scavy.takeDamage(7);
    
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    scavy.attack("bad scavy");
    */
    
    ScavTrap    scavyCopy(scavy);

    scavyCopy.takeDamage(7);
    scavyCopy.beRepaired(3);
    scavyCopy.takeDamage(5);

    scavyCopy.attack("bad scavyCopy");
    scavyCopy.takeDamage(7);
    scavyCopy.beRepaired(3);
    scavyCopy.takeDamage(7);
    
    scavyCopy.attack("bad scavyCopy");
    scavyCopy.attack("bad scavyCopy");
    scavyCopy.attack("bad scavyCopy");
    scavyCopy.attack("bad scavyCopy");
    scavyCopy.attack("bad scavyCopy");
    scavyCopy.attack("bad scavyCopy");
    scavyCopy.attack("bad scavyCopy");
    scavyCopy.attack("bad scavyCopy");
    scavyCopy.attack("bad scavyCopy");
    scavyCopy.attack("bad scavyCopy");
    scavyCopy.attack("bad scavyCopy");
    
    /*
    ScavTrap    scavyCopy(scavy);

    ScavTrap    scavyAssignment;
    scavyAssignment = scavyCopy;
    scavyAssignment.takeDamage(7);
    scavyAssignment.beRepaired(3);
    scavyAssignment.takeDamage(5);

    scavyAssignment.attack("bad scavyAssignment");
    scavyAssignment.takeDamage(7);
    scavyAssignment.beRepaired(3);
    scavyAssignment.takeDamage(7);
    
    scavyAssignment.attack("bad scavyAssignment");
    scavyAssignment.attack("bad scavyAssignment");
    scavyAssignment.attack("bad scavyAssignment");
    scavyAssignment.attack("bad scavyAssignment");
    scavyAssignment.attack("bad scavyAssignment");
    scavyAssignment.attack("bad scavyAssignment");
    scavyAssignment.attack("bad scavyAssignment");
    scavyAssignment.attack("bad scavyAssignment");
    scavyAssignment.attack("bad scavyAssignment");
    scavyAssignment.attack("bad scavyAssignment");
    scavyAssignment.attack("bad scavyAssignment");
    */
    return (0);
}