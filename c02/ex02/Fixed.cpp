/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:07:11 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/26 18:29:42 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fracBits = 8;

Fixed::Fixed() : fixedPoint(0) { 
	std::cout << "Default constructor called" << std::endl;

}

Fixed::~Fixed() { 
	std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed( const Fixed &other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
};

Fixed&	Fixed::operator=( const Fixed& newObj ) {
	std::cout << "Copy assignment operator called" << std::endl;

	if ( this != &newObj )
		this->fixedPoint = newObj.fixedPoint;
	return (*this);
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;

	return (this->fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {
	this->fixedPoint = raw;
}
/*	other member	*/

Fixed::Fixed( const int num ) : fixedPoint( num << fracBits ) {
	std::cout << "parametrized constructor called" << std::endl;

}

Fixed::Fixed( const float point ) : fixedPoint( static_cast<int>( roundf( point * ( 1 << fracBits )) ) ) {
}

float	Fixed::toFloat( void ) const {
	return ( static_cast<float>( this->fixedPoint ) / ( 1 << fracBits ) );
}

int	Fixed::toInt( void ) const {
	
	return ( this->fixedPoint >> fracBits );
}

std::ostream&	operator<<( std::ostream& os, const Fixed& obj ) {
	os << obj.toFloat();
	return os;
}
/*	____________comparison operators____________		*/
bool	Fixed::operator<( const Fixed& rightObj ) const {
	if ( this->getRawBits() < rightObj.getRawBits() )
		return true;
	return false;
}
bool	Fixed::operator>( const Fixed& rightObj ) const {
	if (this->getRawBits() > rightObj.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=( const Fixed& rightObj ) {
	if (this->getRawBits() >= rightObj.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=( const Fixed& rightObj ) {
	if ( this->getRawBits() <= rightObj.getRawBits() )
		return true;
	return false;
}
bool	Fixed::operator==( const Fixed& rightObj ) {
	if ( this->getRawBits() == rightObj.getRawBits() )
		return true;
	return false;
}
bool	Fixed::operator!=( const Fixed& rightObj ) {
	if (this->getRawBits() != rightObj.getRawBits() )
		return true;
	return false;
}
/*	_______________arithmetic operators _________________		*/
Fixed	Fixed::operator+(  const Fixed& rightObj ) {
	return Fixed( this->toFloat() + rightObj.toFloat() );
}

Fixed	Fixed::operator-( const Fixed& rightObj ) {
	return Fixed( this->toFloat() - rightObj.toFloat() );
}

Fixed	Fixed::operator*( const Fixed& rightObj ) {
	float  mult = static_cast<float>(this->fixedPoint) * (rightObj.fixedPoint) / (1 << fracBits * 2);
	return  Fixed(mult);
}

Fixed	Fixed::operator/( const Fixed& rightObj ) {
	float div = (this->fixedPoint) / (rightObj.fixedPoint) * (1 << fracBits * 2);
	return Fixed(div);
}
/*	__________________	The 4 increment/decrement	________________

**	__________(pre-increment and pre-decrement ) ________	*/

Fixed&	Fixed::operator++( void ) {
	setRawBits( fixedPoint + 1 );
	return *this;
}
Fixed&	Fixed::operator--( void ) {
	setRawBits( fixedPoint - 1 );
	return *this;
}
/**	__________(post-increment and post-decrement ) ________	*/
Fixed	Fixed::operator++( int ) {
	Fixed	temp(*this);
	setRawBits( fixedPoint + 1 );
	return temp;
}
Fixed	Fixed::operator--( int ) {
	Fixed	temp(*this);
	setRawBits( fixedPoint - 1 );
	return temp;
}
/*	___________	max && min Fixed-point	___________			*/

Fixed&	Fixed::min( Fixed& fix1, Fixed& fix2 ) {
	if ( fix1 < fix2 )
		return fix1;
	return fix2;	
}

const Fixed&	Fixed::min( const Fixed& fix1, const Fixed& fix2 ) {
	if ( fix1 < fix2 )
		return fix1;
	return fix2;
}
Fixed&	Fixed::max( Fixed& fix1, Fixed& fix2 ) {
	if ( fix1 > fix2 )
		return fix1;
	return fix2;
}

const Fixed&	Fixed::max( const Fixed& fix1, const Fixed& fix2 ) {
	if ( fix1 > fix2 )
		return fix1;
	return fix2;
}