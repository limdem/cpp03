#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>

class   DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
    DiamondTrap();
    DiamondTrap(std::string);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap&);
    DiamondTrap& operator= (const DiamondTrap&);
    std::string getName() const;
    void    attack(const std::string& target);
    void    whoAmI();
};
#endif