/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:45:04 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/13 11:47:58 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Djant"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "One ClapTrap about to start ..." << std::endl;
}

ClapTrap::ClapTrap( const std::string name ) : Name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "claptrap " << this->Name << "about to start ..." << std::endl;
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

void	ClapTrap::displayStatus( const std::string& targ ) {
	std::cout << "ClapTrap " << this->Name
			  << " attacks" << targ
			  << ", causing " << this->attackDamage
			  << " points of damage!" << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {
	if ( this->hitPoints <= 0 || this->energyPoints <= 0 )
		return ;
	this->energyPoints--;
	this->attackDamage++;
	this->hitPoints -= this->attackDamage;
	std::cout << "ClapTrap " << this->Name
			  << " attacks " << target
			  << ", causing " << this->attackDamage
			  << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	this->attackDamage += amount;
	std::cout << "ClapTrap " << this->Name << ", take " << this->attackDamage << " of damage!!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << this->Name << " gets " << amount << " hit points back, so total hit-point is " << this->hitPoints << std::endl;
}

