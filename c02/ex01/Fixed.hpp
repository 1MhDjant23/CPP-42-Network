/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:29:52 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/05 14:01:56 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					fixedPoint;
	static const int	fracBits;
public:
	Fixed& operator=( const Fixed& newObj );//original one
	Fixed();
	Fixed( const int num );
	Fixed( const float point );
	Fixed( const Fixed &other );// original one
	~Fixed();
	int 	getRawBits( void ) const;//original one
	void 	setRawBits( int const raw );//original one
	float	toFloat( void ) const;
	int		toInt( void ) const;
};
std::ostream&	operator<<( std::ostream &os, const Fixed& obj );

#endif