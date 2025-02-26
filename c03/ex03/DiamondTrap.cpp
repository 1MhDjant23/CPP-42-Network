/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:30:19 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/26 11:35:48 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), Name(name) {
	this->attackDamage = 1222;
	std::cout << "DiamondTrap " << this->Name << " starting it's operation" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "i'm " << this->Name << " soon of " << FragTrap::Name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destroyed" << std::endl;
}
