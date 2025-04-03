#ifndef	DIAMONDTRAP_HPP
#define	DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

//it must inherite virtualy in both parent classes

class	DiamondTrap : public ScavTrap, public  FragTrap
{
	private:
		std::string	Name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap( const std::string& Name );
		DiamondTrap( const FragTrap& other );
		DiamondTrap&	operator=( const FragTrap& other );
		void	whoAmI();
};

#endif