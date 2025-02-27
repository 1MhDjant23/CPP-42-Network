/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:39:29 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/27 13:10:58 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string	Name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
		ClapTrap();
		ClapTrap( const ClapTrap& other );
		ClapTrap&	operator=( const ClapTrap& obj );
		virtual	~ClapTrap();
		ClapTrap( const std::string name );
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	displayStatus( void );
};

#endif