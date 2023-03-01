#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

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
        std::string getName() const;
        int     getHit() const;
        int     getEnergy() const;
        int     getAttack() const;
        void    setName(std::string);
        void    setHit(int);
        void    setEnergy(int);
        void    setAttack(int);
        int     getInitialHit() const;
        int     getInitialEnergy() const;
        int     getInitialAttack() const;
};
#endif