/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:27:55 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/06 22:54:56 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
Point::Point() : x(0), y(0) { }

Point::~Point() {}

Point::Point( const float fl1, const float fl2 ) : x(fl1), y(fl2) { }

Point::Point( const Point& other ) {
	*this = other;
}

Point&	Point::operator=( const Point& obj ) {
	(void)obj;
	return *this;
}

const Fixed&	Point::getXX( void ) const {
	return this->x;
}

const Fixed&	Point::getYY( void ) const {
	return this->y;
}

Fixed	Point::calculateArea( const Point& a, const Point& b, const Point& c ) {
	Fixed	area = a.getXX * ( b.getYY - c.getYY ) + b.getXX * ( c.getYY - a.getYY ) + c.getXX * ( a.getYY - b.getYY );
	area /= 2;
	return area;
}

void	Point::printBolean( bool stat ) {
	if ( stat == true )
		std::cout << "the point is inside the triangle." << std::endl;
	else
		std::cout << "the point is a vertex or on edge." << std::endl;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {
	// calculate the area of abc and subtriangle here , because i can't use copy constructor or copy assignment operator here _________
}