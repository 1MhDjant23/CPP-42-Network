/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:28:43 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/07 21:56:40 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	bool	stat;
	std::cout << a.getXX() << " $$ " << b.getYY() << " $$ " << c.getXX() << std::endl;

	Fixed	abcArea(Point::calculateArea(a, b, c));
	Fixed	abxArea(Point::calculateArea(a, b, point));
	Fixed	acxArea(Point::calculateArea(a, c, point));
	Fixed	cbxArea(Point::calculateArea(c, b, point));
	
	stat = ( abxArea > 0) &&( cbxArea > 0 ) && ( acxArea > 0 ) && ( abcArea == abxArea + acxArea + cbxArea );
	return ( stat );
}