/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:17:29 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/27 12:01:34 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DIAMONDTRAP_HPP
#define	DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	Name;
	public:
		DiamondTrap();
		DiamondTrap( std::string name );
		virtual	~DiamondTrap();
		DiamondTrap( const DiamondTrap& other );
		DiamondTrap&	operator=( const DiamondTrap& other );
		void whoAmI();
};

#endif