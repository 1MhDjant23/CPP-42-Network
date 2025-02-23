/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 10:40:06 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 21:55:12 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->Name = "Scav";
	std::cout << "One ScavTrap is in the process of starting..." << std::endl;
}

ScavTrap::ScavTrap( std::string name ){
	this->Name = name;
	std::cout << "ScavTrap " << this->Name << " is on its way to start..." << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->Name << " has switched to Gate keeper mode now." << std::endl;
}
void	ScavTrap::attack( const std::string& target ) {
	std::cout << "ScavTrap " <<  this->Name <<  " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScaVtrap " << this->Name << " die" << std::endl;
}