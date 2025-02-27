/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:36:02 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/27 13:37:29 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap	diam("DJANTMOH");
	diam.attack("NRC");
	diam.displayStatus();
	diam.whoAmI();
	// FragTrap	fr1("NFC");
	// ClapTrap	*clapPtr ;
	// clapPtr = &fr1;
	// fr1.highFivesGuys();
	// clapPtr->attack("DJANT");
	// fr1.displayStatus();
	// clap.displayStatus();
	return 0;
}
