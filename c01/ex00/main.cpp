/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:51:32 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/17 13:53:18 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	ftt() { system("leaks Zombie"); }

int	main()
{
	Zombie nik("rouge");
	Zombie	*zombie1;
	nik.announce();
	zombie1 = newZombie("Djant");
	zombie1->announce();
	randomChump("Foo");
	delete zombie1;
	return (0);
}