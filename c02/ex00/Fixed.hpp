/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:37:30 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/02 13:43:44 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					fixedPoint;
	static const int	fracBits;
public:
	Fixed();
	Fixed( const Fixed &other );
	Fixed &operator=( const Fixed& other );
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
