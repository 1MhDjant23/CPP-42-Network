/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:36:02 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/27 13:17:19 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	FragTrap	diam("DJANTMOH");
	diam.attack("NRC");
	diam.displayStatus();
	return 0;
}
