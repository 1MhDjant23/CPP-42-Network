/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:24:06 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/25 16:29:40 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap& other );
		FragTrap&	operator=( const FragTrap& other );
		~FragTrap();
		void	highFivesGuys(void);
};

#endif