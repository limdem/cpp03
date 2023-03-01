#include "../includes/ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hitP = 10;
    this->_energyP = 10;
    this->_attackP = 0;
    std::cout << this->_name << " created by the ClapTrap constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap default destructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
:_name(src._name), _hitP(src._hitP), _energyP(src._energyP), _attackP(src._attackP)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& src)
{
    this->_name = src._name;
    this->_hitP = src._hitP;
    this->_energyP = src._energyP;
    this->_attackP = src._attackP;
    std::cout << "ClapTrap copy assignment called" << std::endl;
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (!this->_hitP || !this->_energyP)
    {
        if (!this->_hitP)
            std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
        else
            std::cout << "ClapTrap " << this->_name << " has no energy!" << std::endl;
        return ;
    }
    this->_energyP--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackP << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->_hitP || !this->_energyP)
    {
        if (!this->_hitP)
            std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
        else
            std::cout << "ClapTrap " << this->_name << " has no energy!" << std::endl;
        return ;
    }
    this->_hitP -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if (this->_hitP <= 0)
    {
        this->_hitP = 0;
        std::cout << "ClapTrap " << this->_name << " dies!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->_hitP || !this->_energyP)
    {
        if (!this->_hitP)
            std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
        else
            std::cout << "ClapTrap " << this->_name << " has no energy!" << std::endl;
        return ;
    }
    this->_energyP--;
    this->_hitP += amount;
    std::cout << "ClapTrap " << this->_name << " is repaired and gets " << amount << " point of life!" << std::endl;    
}