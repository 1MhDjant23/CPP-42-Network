/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:33:59 by mait-taj          #+#    #+#             */
/*   Updated: 2025/01/31 10:18:52 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon( std::string typ ) {
	type = typ;
}

const	std::string	Weapon::getType() const {
	return (type);
}
void	Weapon::setType( std::string typ ) {
	type = typ;
}