/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:27:55 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/14 21:49:50 by mait-taj         ###   ########.fr       */
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

Fixed&	Point::getFirstFixedPoint( void ) const{
	return this->x;
}
Fixed&	Point::getSecondFixedPoint( void ) const{
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
