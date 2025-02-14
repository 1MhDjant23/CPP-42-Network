/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 21:00:55 by mait-taj          #+#    #+#             */
/*   Updated: 2025/01/27 10:57:22 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	leak() { system("leaks zombieHorde"); }

int	main()
{
	atexit(leak);
	int	size = 5;
	int	i = 0;

	Zombie	*zombi = zombieHorde( size, "Djant" );

	while ( i < size )
		zombi[ i++ ].announce();
	delete [] zombi;
	return (0);
}
