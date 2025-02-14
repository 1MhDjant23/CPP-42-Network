/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:30:05 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/02 12:11:31 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harlObj;
	harlObj.complain("INFO");
	harlObj.complain("DEBUG");
	harlObj.complain("ERROR");
	harlObj.complain("WARNING");
	return (0);
}