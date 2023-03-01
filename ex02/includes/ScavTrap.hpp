#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class   ScavTrap: public ClapTrap
{
    private:
        bool    _gateKeeper;
    public:
        ScavTrap();
        ScavTrap(std::string);
        ~ScavTrap();
        ScavTrap(const ScavTrap&);
        ScavTrap& operator= (const ScavTrap&);
        void    attack(const std::string& target);
        void    guardGate();
};
#endif