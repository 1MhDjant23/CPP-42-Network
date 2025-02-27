/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:30:19 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/27 13:36:43 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
			ClapTrap("Diamond_clap_name"),
			ScavTrap(),
			FragTrap()
{
	this->energyPoints = 50;
	std::cout << "DiamondTrap starting it's operation" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) :
			ClapTrap(name + "_clap_name"),
			ScavTrap(name),
			FragTrap(name),
			Name(name)
{
	this->energyPoints = 50;
	std::cout << "DiamondTrap " << this->Name << " starting it's operation" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "i'm " << this->Name << " soon of " << ClapTrap::Name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->Name << " destroyed" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) {
	std::cout << "`Copy Constructor` of [ DiamondTrap ] called." << std::endl;
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other ) {
	if ( this != &other ) {
		FragTrap::operator=( other );
		ScavTrap::operator=( other );
		this->Name = other.Name;
	}
	std::cout << "`Copy Assignment Operator` of [ DiamondTrap ] called." << std::endl;
	return *this;
}