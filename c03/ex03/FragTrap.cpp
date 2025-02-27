/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:26:31 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/27 13:44:12 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :
		ClapTrap("FragClap")
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->Name << " is about to begin." << std::endl;
}

FragTrap::FragTrap( std::string name ) :
		ClapTrap( name )
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->Name << " is currently underway." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "The FragTrap " << this->Name << " has been torn down." << std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap(other) {
	std::cout << "`Copy constructor` for [ FragTrap ] called." << std::endl;
	*this = other;
}

FragTrap&	FragTrap::operator=( const FragTrap& other ) {
	if ( this != &other ) {
		ClapTrap::operator=( other );
	}
	std::cout << "`Copy Assignment Operator` for [ FragTrap ] called." << std::endl;
	return *this;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "Give me a high-five 🖐️ !" << std::endl;
}