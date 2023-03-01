#include "../includes/DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
:ClapTrap(name + "_clap_name")
{
    this->_name = name;
    this->setHit(FragTrap::getInitialHit());
    this->setEnergy(ScavTrap::getInitialEnergy());
    this->setAttack(FragTrap::getInitialAttack());
    std::cout << this->getName() << " created by the DiamondTrap constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap default destructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
:ClapTrap(src._name + "_clap_name"), ScavTrap(), FragTrap()
{
    this->_name = src._name;
    this->setHit(FragTrap::getInitialHit());
    this->setEnergy(ScavTrap::getInitialEnergy());
    this->setAttack(FragTrap::getInitialAttack());
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& src)
{
    this->_name = src._name;
    this->setHit(FragTrap::getInitialHit());
    this->setEnergy(ScavTrap::getInitialEnergy());
    this->setAttack(FragTrap::getInitialAttack());
    std::cout << "DiamondTrap copy assignment called" << std::endl;
    return (*this);
}

std::string DiamondTrap::getName() const
{
    return (this->_name);
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << this->getName() << std::endl;
    std::cout << ClapTrap::getName() << std::endl;
}