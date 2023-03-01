#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string);
        ~FragTrap();
        FragTrap(const FragTrap&);
        FragTrap& operator= (const FragTrap&);
        void    highFivesGuys(void);
};
#endif