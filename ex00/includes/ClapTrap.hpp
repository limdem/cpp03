#include <string>

class   ClapTrap
{
    private:
        std::string _name;
        int _hitP;
        int _energyP;
        int _attackP;
    public:
        ClapTrap();
        ClapTrap(std::string);
        ~ClapTrap();
        ClapTrap(const ClapTrap&);
        ClapTrap& operator= (const ClapTrap&);
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};