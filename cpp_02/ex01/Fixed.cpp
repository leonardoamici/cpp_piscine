/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:55:20 by lamici            #+#    #+#             */
/*   Updated: 2023/10/10 14:14:29 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int x)
{
	this->_fixedPoint = x << _x;
}

Fixed::Fixed(const float x)
{
	this->_fixedPoint = roundf(x * (1 << _x));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &copy)
{	
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = copy.getRawBits();
	return (*this);
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPoint >> _x);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPoint / (1 << _x));
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return(stream);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}