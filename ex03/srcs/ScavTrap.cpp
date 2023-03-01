#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout << "ScavTrap constructor is called" << std::endl;
    this->setHit(this->getInitialHit());
    this->setEnergy(this->getInitialEnergy());
    this->setAttack(this->getInitialAttack());
    this->_gateKeeper = false;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src):ClapTrap(src.getName())
{
    this->setHit(src.getHit());
    this->setEnergy(src.getEnergy());
    this->setAttack(src.getAttack());
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& src)
{
    this->setName(src.getName());
    this->setHit(src.getHit());
    this->setEnergy(src.getEnergy());
    this->setAttack(src.getAttack());
    std::cout << "ScavTrap copy assignment called" << std::endl;
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (!this->getHit() || !this->getEnergy())
    {
        if (!this->getHit())
            std::cout << "ScavTrap " << this->getName() << " is already dead!" << std::endl;
        else
            std::cout << "ScavTrap " << this->getName() << " has no energy!" << std::endl;
        return ;
    }
    this->setEnergy(this->getEnergy() - 1);
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttack() << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " is in Gate keeper mode" << std::endl;
    this->_gateKeeper = true;
}

int     ScavTrap::getInitialHit() const
{
    return (100);
}

int     ScavTrap::getInitialEnergy() const
{
    return (50);
}

int     ScavTrap::getInitialAttack() const
{
    return (20);
}