#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"
#include <iostream>


int main()
{
    /*
    DiamondTrap    diamondy("diamondy");

    std::cout << diamondy.getName() << std::endl;
    std::cout << diamondy.getHit() << std::endl;
    std::cout << diamondy.getEnergy() << std::endl;
    std::cout << diamondy.getAttack() << std::endl;
    diamondy.highFivesGuys();
    */
    /*
    DiamondTrap    diamondy("diamondy");

    std::cout << diamondy.getName() << std::endl;
    std::cout << diamondy.getHit() << std::endl;
    std::cout << diamondy.getEnergy() << std::endl;
    std::cout << diamondy.getAttack() << std::endl;
    


    diamondy.attack("bad diamondy");
    diamondy.takeDamage(7);
    diamondy.beRepaired(3);
    diamondy.takeDamage(5);

    
    diamondy.attack("bad diamondy");
    diamondy.takeDamage(7);
    diamondy.beRepaired(3);
    diamondy.takeDamage(7);
    
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    for (int i = 0; i < 100; i++)
        diamondy.attack("bad diamondy");
    */
    /*
    DiamondTrap    diamondy("diamondy");

    
    diamondy.attack("bad diamondy");
    diamondy.takeDamage(7);
    diamondy.beRepaired(3);
    diamondy.takeDamage(5);

    
    diamondy.attack("bad diamondy");
    diamondy.takeDamage(7);
    diamondy.beRepaired(3);
    diamondy.takeDamage(7);
    
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    diamondy.attack("bad diamondy");
    */
    /*
    DiamondTrap    diamondy("diamondy");
    DiamondTrap    diamondyCopy(diamondy);

    diamondyCopy.takeDamage(7);
    diamondyCopy.beRepaired(3);
    diamondyCopy.takeDamage(5);

    diamondyCopy.attack("bad diamondyCopy");
    diamondyCopy.takeDamage(7);
    diamondyCopy.beRepaired(3);
    diamondyCopy.takeDamage(7);
    
    diamondyCopy.attack("bad diamondyCopy");
    diamondyCopy.attack("bad diamondyCopy");
    diamondyCopy.attack("bad diamondyCopy");
    diamondyCopy.attack("bad diamondyCopy");
    diamondyCopy.attack("bad diamondyCopy");
    diamondyCopy.attack("bad diamondyCopy");
    diamondyCopy.attack("bad diamondyCopy");
    diamondyCopy.attack("bad diamondyCopy");
    diamondyCopy.attack("bad diamondyCopy");
    diamondyCopy.attack("bad diamondyCopy");
    diamondyCopy.attack("bad diamondyCopy");
    
    std::cout << "name: " << diamondy.getName() << std::endl;
    */
    DiamondTrap    diamondy("diamondy");
    DiamondTrap    diamondyCopy(diamondy);

    DiamondTrap    diamondyAssignment;
    diamondyAssignment = diamondyCopy;
    diamondyAssignment.takeDamage(7);
    diamondyAssignment.beRepaired(3);
    diamondyAssignment.takeDamage(5);

    diamondyAssignment.attack("bad diamondyAssignment");
    diamondyAssignment.takeDamage(7);
    diamondyAssignment.beRepaired(3);
    diamondyAssignment.takeDamage(7);
    
    diamondyAssignment.attack("bad diamondyAssignment");
    diamondyAssignment.attack("bad diamondyAssignment");
    diamondyAssignment.attack("bad diamondyAssignment");
    diamondyAssignment.attack("bad diamondyAssignment");
    diamondyAssignment.attack("bad diamondyAssignment");
    diamondyAssignment.attack("bad diamondyAssignment");
    diamondyAssignment.attack("bad diamondyAssignment");
    diamondyAssignment.attack("bad diamondyAssignment");
    diamondyAssignment.attack("bad diamondyAssignment");
    diamondyAssignment.attack("bad diamondyAssignment");
    diamondyAssignment.attack("bad diamondyAssignment");
    
    return (0);
}