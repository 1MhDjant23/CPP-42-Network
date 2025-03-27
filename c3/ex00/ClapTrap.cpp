/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:48:36 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/25 21:53:37 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : Name(""), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "One ClapTrap about to start ..." << std::endl;
}

ClapTrap::ClapTrap( const std::string& name ) : Name(name), {
	std::cout << "Claptrap " << this->Name << " about to start ..." << std::endl;
	
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->Name << " die!!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	*this = other;
}

ClapTrap::operator=( const ClapTrap& other ) {
	if (this != &other)
	{
		this->Name = other->Name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return *this;
}
void attack( const std::string& target );
void takeDamage( unsigned int amount );
void beRepaired( unsigned int amount );