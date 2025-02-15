/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:28:43 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/15 11:44:07 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	triangleSource = Point::calculateArea( a, b, c );
	Fixed	sub1 = Point::calculateArea( a, b, point );
	Fixed	sub2 = Point::calculateArea( b, c, point );
	Fixed	sub3 = Point::calculateArea( point, a, c );
	if ( sub1 + sub2 + sub3 == triangleSource )
		return true;
	return false;
}