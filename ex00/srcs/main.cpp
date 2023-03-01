#include "../includes/ClapTrap.hpp"

int main()
{
    ClapTrap    clappy("clappy");

    /*
    clappy.attack("bad clappy");
    clappy.takeDamage(7);
    clappy.beRepaired(3);
    clappy.takeDamage(5);

    
    clappy.attack("bad clappy");
    clappy.takeDamage(7);
    clappy.beRepaired(3);
    clappy.takeDamage(7);
    
    clappy.attack("bad clappy");
    clappy.attack("bad clappy");
    clappy.attack("bad clappy");
    clappy.attack("bad clappy");
    clappy.attack("bad clappy");
    clappy.attack("bad clappy");
    clappy.attack("bad clappy");
    clappy.attack("bad clappy");
    clappy.attack("bad clappy");
    clappy.attack("bad clappy");
    clappy.attack("bad clappy");
    */
    /*
    ClapTrap    clappyCopy(clappy);

    clappyCopy.takeDamage(7);
    clappyCopy.beRepaired(3);
    clappyCopy.takeDamage(5);

    clappyCopy.attack("bad clappyCopy");
    clappyCopy.takeDamage(7);
    clappyCopy.beRepaired(3);
    clappyCopy.takeDamage(7);
    
    clappyCopy.attack("bad clappyCopy");
    clappyCopy.attack("bad clappyCopy");
    clappyCopy.attack("bad clappyCopy");
    clappyCopy.attack("bad clappyCopy");
    clappyCopy.attack("bad clappyCopy");
    clappyCopy.attack("bad clappyCopy");
    clappyCopy.attack("bad clappyCopy");
    clappyCopy.attack("bad clappyCopy");
    clappyCopy.attack("bad clappyCopy");
    clappyCopy.attack("bad clappyCopy");
    clappyCopy.attack("bad clappyCopy");
    */
    ClapTrap    clappyCopy(clappy);

    ClapTrap    clappyAssignment;
    clappyAssignment = clappyCopy;
    clappyAssignment.takeDamage(7);
    clappyAssignment.beRepaired(3);
    clappyAssignment.takeDamage(5);

    clappyAssignment.attack("bad clappyAssignment");
    clappyAssignment.takeDamage(7);
    clappyAssignment.beRepaired(3);
    clappyAssignment.takeDamage(7);
    
    clappyAssignment.attack("bad clappyAssignment");
    clappyAssignment.attack("bad clappyAssignment");
    clappyAssignment.attack("bad clappyAssignment");
    clappyAssignment.attack("bad clappyAssignment");
    clappyAssignment.attack("bad clappyAssignment");
    clappyAssignment.attack("bad clappyAssignment");
    clappyAssignment.attack("bad clappyAssignment");
    clappyAssignment.attack("bad clappyAssignment");
    clappyAssignment.attack("bad clappyAssignment");
    clappyAssignment.attack("bad clappyAssignment");
    clappyAssignment.attack("bad clappyAssignment");
    
    return (0);
}