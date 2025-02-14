/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:10:11 by mait-taj          #+#    #+#             */
/*   Updated: 2025/01/26 20:39:01 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string	name;
	public:
		Zombie();
		Zombie(std::string str);
		~Zombie();
		void	announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif