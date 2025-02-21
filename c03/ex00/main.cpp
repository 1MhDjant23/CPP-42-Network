/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:36:02 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/21 11:40:15 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap	clap1;
	ClapTrap	clap2("NRC");

	clap1.attack("NIKI");
	clap1.attack("MAXI");
	clap1.attack("MOI");
	clap1.takeDamage(5);
	clap1.beRepaired(1);
	clap1.beRepaired(1);
	clap1.beRepaired(1);
	clap1.beRepaired(1);
	clap1.attack("TAMAZIRT");
	clap2.attack("NRC2");
	clap2 = clap1;
	ClapTrap	clap3(clap2);
	clap3.displayStatus();
	clap1.displayStatus();
	clap2.displayStatus();
	return 0;
}
