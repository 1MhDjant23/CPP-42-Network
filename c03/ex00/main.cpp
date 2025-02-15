/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:36:02 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/15 13:10:58 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap	clap_1("Simo");
	ClapTrap	clap_2;

	clap_1.displayStatus();
	clap_1.attack("Djant");
	clap_1.takeDamage(3);
	clap_1.beRepaired(13);
	clap_1.displayStatus();

	clap_2.displayStatus();
	clap_2 = clap_1;
	clap_2.displayStatus();
	// ClapTrap	claptrapObj("SIMO");
	// // ClapTrap	other("NIKI");
	// claptrapObj.attack("NFC");
	// claptrapObj.takeDamage(3);
	// claptrapObj.beRepaired(3);
	return 0;
}
