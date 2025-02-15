/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:39:29 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/15 13:11:11 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string	Name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
		ClapTrap();
		ClapTrap( const ClapTrap& other );
		ClapTrap&	operator=( const ClapTrap& obj );
		~ClapTrap();
		ClapTrap( const std::string name );
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	displayStatus( void );
};

#endif