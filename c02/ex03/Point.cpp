/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:27:55 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/15 12:06:36 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
Point::Point() : x(0), y(0) { return ; }

Point::~Point() {}

Point::Point( const float fl1, const float fl2 ) : x(fl1), y(fl2) { return ;}

Point::Point( const Point& other ) {
	*this = other;
}

Point&	Point::operator=( const Point& obj ) {
	if ( this != &obj ) {
		this->x = obj.getFirstFixedPoint();
		this->y = obj.getSecondFixedPoint();
	}
	return *this;
}

const Fixed&	Point::getFirstFixedPoint( void ) const{
	return this->x;
}
const Fixed&	Point::getSecondFixedPoint( void ) const{
	return this->y;
}

void	Point::setFixedPoint( const Fixed& fix1, const Fixed& fix2 ) {
	this->x = fix1;
	this->y = fix2;
}

Fixed	Point::calculateArea( const Point& a, const Point& b, const Point& c ) {
	Fixed	area = a.getFirstFixedPoint * ( b.getSecondFixedPoint - c.getSecondFixedPoint ) + b.getFirstFixedPoint * ( c.getSecondFixedPoint - a.getSecondFixedPoint ) + c.getFirstFixedPoint * ( a.getSecondFixedPoint - b.getSecondFixedPoint );
	area /= 2;
	if (area < 0)
		return (area * -1);
	return area;
}

void	Point::printBolean( bool stat ) {
	if ( stat == true )
		std::cout << "the point is inside the triangle." << std::endl;
	else
		std::cout << "the point is a vertex or on edge." << std::endl;
}
