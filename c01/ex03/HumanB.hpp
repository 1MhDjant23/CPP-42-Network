/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:54:37 by mait-taj          #+#    #+#             */
/*   Updated: 2025/01/31 10:15:27 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
#define	HUMANB_HPP
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		*_weapon;
	public:
		HumanB();
		HumanB( std::string nam );
		~HumanB();
		void	setWeapon(Weapon &wepon);
		void	attack();
};

#endif