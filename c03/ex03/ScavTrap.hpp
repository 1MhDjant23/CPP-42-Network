/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:21:00 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/27 13:27:24 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& other );
		ScavTrap&	operator=( const ScavTrap& other );
		virtual	~ScavTrap();
		void	guardGate();
		void	attack( const std::string& target );
};

#endif