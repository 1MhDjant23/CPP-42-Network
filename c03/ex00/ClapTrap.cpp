/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:45:04 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/21 11:23:00 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Djant"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "One ClapTrap about to start ..." << std::endl;
}

ClapTrap::ClapTrap( const std::string name ) : Name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Claptrap " << this->Name << " about to start ..." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	*this = other;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& obj ) {
	if ( this != &obj ) {
		this->Name = obj.Name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->Name << " die!!" << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {
	if ( this->hitPoints <= 0 || this->energyPoints <= 0 )
		return ;
	this->energyPoints--;
	this->hitPoints -= this->attackDamage;
	std::cout << "ClapTrap " << this->Name
			  << " attacks " << target
			  << ", causing " << this->attackDamage
			  << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if ( this->hitPoints <= 0 )
		return ;
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->Name << ", take " << amount << " of damage!!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if ( this->energyPoints <= 0 )
		return ;
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << this->Name << " gets " << amount << " hit points back, " << "Lost one energy; total energy: " <<
		this->energyPoints << ", total hit-point: " << this->hitPoints << std::endl;
}


void	ClapTrap::displayStatus( void ) {
	std::cout << "ClapTrap " << this->Name
			  << " take " << this->attackDamage << " of damage , total hit-points: " << this->hitPoints
			  << ", total energy-points: " << this->energyPoints << std::endl;
}
