#include "../includes/FragTrap.hpp"
#include "../includes/ClapTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    this->setHit(100);
    this->setEnergy(100);
    this->setAttack(30);
    std::cout << this->getName() << " created by the FragTrap constructor" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap default destructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src):ClapTrap(src.getName())
{
    this->setHit(src.getHit());
    this->setEnergy(src.getEnergy());
    this->setAttack(src.getAttack());
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& src)
{
    this->setName(src.getName());
    this->setHit(src.getHit());
    this->setEnergy(src.getEnergy());
    this->setAttack(src.getAttack());
    std::cout << "FragTrap copy assignment called" << std::endl;
    return (*this);
}

void    FragTrap::highFivesGuys()
{
    std::string hf;

    std::cout << "Please do me a high five!" << std::endl;
    std::getline(std::cin, hf);
    if (std::cin.eof())
    {
        std::cout << "Error" << std::endl;
        return ;
    }
    if (hf.compare("HIGH FIVE"))
    {
        highFivesGuys();
        return ;
    }
    std::cout << "thank you!" << std::endl;
}