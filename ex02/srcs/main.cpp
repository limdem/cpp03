#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <iostream>


int main()
{
    /*
    FragTrap    fraggy("fraggy");

    std::cout << fraggy.getName() << std::endl;
    std::cout << fraggy.getHit() << std::endl;
    std::cout << fraggy.getEnergy() << std::endl;
    std::cout << fraggy.getAttack() << std::endl;
    fraggy.highFivesGuys();
    */
    /*
    FragTrap    fraggy("fraggy");

    std::cout << fraggy.getName() << std::endl;
    std::cout << fraggy.getHit() << std::endl;
    std::cout << fraggy.getEnergy() << std::endl;
    std::cout << fraggy.getAttack() << std::endl;
    


    fraggy.attack("bad fraggy");
    fraggy.takeDamage(7);
    fraggy.beRepaired(3);
    fraggy.takeDamage(5);

    
    fraggy.attack("bad fraggy");
    fraggy.takeDamage(7);
    fraggy.beRepaired(3);
    fraggy.takeDamage(7);
    
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    for (int i = 0; i < 100; i++)
        fraggy.attack("bad fraggy");
    */
    
    FragTrap    fraggy("fraggy");

    /*
    fraggy.attack("bad fraggy");
    fraggy.takeDamage(7);
    fraggy.beRepaired(3);
    fraggy.takeDamage(5);

    
    fraggy.attack("bad fraggy");
    fraggy.takeDamage(7);
    fraggy.beRepaired(3);
    fraggy.takeDamage(7);
    
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    fraggy.attack("bad fraggy");
    */
    /*
    FragTrap    fraggyCopy(fraggy);

    fraggyCopy.takeDamage(7);
    fraggyCopy.beRepaired(3);
    fraggyCopy.takeDamage(5);

    fraggyCopy.attack("bad fraggyCopy");
    fraggyCopy.takeDamage(7);
    fraggyCopy.beRepaired(3);
    fraggyCopy.takeDamage(7);
    
    fraggyCopy.attack("bad fraggyCopy");
    fraggyCopy.attack("bad fraggyCopy");
    fraggyCopy.attack("bad fraggyCopy");
    fraggyCopy.attack("bad fraggyCopy");
    fraggyCopy.attack("bad fraggyCopy");
    fraggyCopy.attack("bad fraggyCopy");
    fraggyCopy.attack("bad fraggyCopy");
    fraggyCopy.attack("bad fraggyCopy");
    fraggyCopy.attack("bad fraggyCopy");
    fraggyCopy.attack("bad fraggyCopy");
    fraggyCopy.attack("bad fraggyCopy");
    
    std::cout << "name: " << fraggy.getName() << std::endl;
    */
    
    FragTrap    fraggyCopy(fraggy);

    FragTrap    fraggyAssignment;
    fraggyAssignment = fraggyCopy;
    fraggyAssignment.takeDamage(7);
    fraggyAssignment.beRepaired(3);
    fraggyAssignment.takeDamage(5);

    fraggyAssignment.attack("bad fraggyAssignment");
    fraggyAssignment.takeDamage(7);
    fraggyAssignment.beRepaired(3);
    fraggyAssignment.takeDamage(7);
    
    fraggyAssignment.attack("bad fraggyAssignment");
    fraggyAssignment.attack("bad fraggyAssignment");
    fraggyAssignment.attack("bad fraggyAssignment");
    fraggyAssignment.attack("bad fraggyAssignment");
    fraggyAssignment.attack("bad fraggyAssignment");
    fraggyAssignment.attack("bad fraggyAssignment");
    fraggyAssignment.attack("bad fraggyAssignment");
    fraggyAssignment.attack("bad fraggyAssignment");
    fraggyAssignment.attack("bad fraggyAssignment");
    fraggyAssignment.attack("bad fraggyAssignment");
    fraggyAssignment.attack("bad fraggyAssignment");
    
    return (0);
}