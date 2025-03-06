/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:11:37 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/06 22:47:07 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class	Point {
	private:
		const Fixed  x;
		const Fixed  y;
	public:
		Point();
		~Point();
		Point&	operator=( const Point& obj );
		Point( const Point& other );
		Point( const float fl1, const float fl2 );
		const Fixed&			getXX( void ) const;
		const Fixed&			getYY( void ) const;
		static Fixed	calculateArea( const Point& a, const Point& b, const Point& c );
		static	void	printBolean( bool stat );
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif