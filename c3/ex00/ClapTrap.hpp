/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:49:02 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/20 22:05:13 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP

class	ClapTrap
{
	private:
		std::string	Name;
		int			HitPoints;
		int			EnergyPoints;
		int			AttackDamage;
	public:
		ClapTrap( void );
		ClapTrap( const std::string& name );
		~ClapTrap( void );
		ClapTrap( const ClapTrap& other );
		ClapTrap&	operator=( const ClapTrap& other );
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
}



#endif