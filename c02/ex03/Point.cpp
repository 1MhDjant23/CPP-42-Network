/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:27:55 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/07 21:54:53 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
Point::Point() : x(0), y(0) { std::cout << "default" << std::endl; }

Point::~Point() {}

Point::Point( const float fl1, const float fl2 ) : x(fl1), y(fl2) {
	std::cout << "x = " << this->x << "-- y = " << this->y << std::endl;
 }

Point::Point( const Point& other ) {
	*this = other;
}

Point&	Point::operator=( const Point& obj ) {
	(void)obj;
	return *this;
}

Fixed	Point::getXX( void ) const {
	return this->x;
}

Fixed	Point::getYY( void ) const {
	return this->y;
}

Fixed	Point::calculateArea( const Point a, const Point b, const Point c ) {
	Fixed	area = (a.getXX() * ( b.getYY() - c.getYY() ) + b.getXX() * ( c.getYY() - a.getYY() ) + c.getXX() * ( a.getYY() - b.getYY() ))/2;
	std::cout << "area is: " << area << std::endl;
	return (area < 0 ? area * -1 : area);
}

void	Point::printBolean( bool stat ) {
	if ( stat == true )
		std::cout << "the point is inside the triangle." << std::endl;
	else
		std::cout << "the point is a vertex or on edge." << std::endl;
}


