/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:36:02 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 21:48:17 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main( void )
{
	// ClapTrap*	clap1;
	// ClapTrap	clap2("NRC");
	ClapTrap	*calp ;
	calp = new ScavTrap();
	calp->attack("test");
	delete calp;
	// ScavTrap	scav2;
	std::cout << "scavtrap now" << std::endl;
	ScavTrap	scav22("LALALALAL");
	// scav1.displayStatus();
	// clap1 = &scav1;
	// scav1.attack("SIMOO");
	// scav1.displayStatus();
	// scav1.guardGate();
	// scav1.attack("NFC");
	// clap1->displayStatus();
	// clap1.attack("NIKI");
	// clap1.attack("MAXI");
	// clap1.attack("MOI");
	// clap1.takeDamage(5);
	// clap1.beRepaired(1);
	// clap1.beRepaired(1);
	// clap1.beRepaired(1);
	// clap1.beRepaired(1);
	// clap1.attack("TAMAZIRT");
	// clap2.attack("NRC2");
	// clap2 = clap1;
	// ClapTrap	clap3(clap2);
	// clap3.displayStatus();
	// clap1.displayStatus();
	// clap2.displayStatus();
	return 0;
}
