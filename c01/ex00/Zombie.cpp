/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:23:34 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/17 13:41:17 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {	return ; }

Zombie::Zombie( std::string str ) : name(str) { }

Zombie::~Zombie() {
	std::cout << "i'm finishing..." << std::endl;
}
void	Zombie::announce( void )
{
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}