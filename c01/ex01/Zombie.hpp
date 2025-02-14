/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 21:01:04 by mait-taj          #+#    #+#             */
/*   Updated: 2025/01/27 09:09:20 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class	Zombie
{
	private:
		std::string	_name;
	public:
		Zombie( std::string name );
		Zombie();
		~Zombie();
		void	announce();
};

Zombie	*zombieHorde( int N, std::string name );
#endif