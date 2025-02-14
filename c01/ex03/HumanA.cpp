/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:11:18 by mait-taj          #+#    #+#             */
/*   Updated: 2025/01/31 10:38:54 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp" 

HumanA::~HumanA() {
	std::cout << "HumanA die !" << std::endl;
}

HumanA::HumanA( std::string name, Weapon& wepon ) : _weapon(wepon)
{
	_name = name;
}
void	HumanA::attack() {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
