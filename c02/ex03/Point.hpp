/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:11:37 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/15 12:06:02 by mait-taj         ###   ########.fr       */
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
		void			setFixedPoint( const Fixed& fix1, const Fixed& fix2 );
		const Fixed&			getFirstFixedPoint( void ) const;
		const Fixed&			getSecondFixedPoint( void ) const;
		static Fixed	calculateArea( const Point& a, const Point& b, const Point& c );
		static	void	printBolean( bool stat );
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif