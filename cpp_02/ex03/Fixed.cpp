/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:55:20 by lamici            #+#    #+#             */
/*   Updated: 2023/09/22 10:29:58 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	//td::cout << "Copy constructor called" << std::endl;
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
	//std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &copy)
{	
	//std::cout << "Copy assignment operator called" << std::endl;
	if(this != &copy)
		this->_fixedPoint = copy.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &copy) const
{
	//std::cout << "Addition arithmetic operator called" << std::endl;
	Fixed	res(this->toFloat() + copy.toFloat());
	return (res);
}

Fixed	Fixed::operator-(Fixed const &copy) const
{
	//std::cout << "Subtraction arithmetic operator called" << std::endl;
	Fixed	res(this->toFloat() - copy.toFloat());
	return (res);
}

Fixed	Fixed::operator*(Fixed const &copy) const
{
	//std::cout << "Multiplication arithmetic operator called" << std::endl;
	Fixed	res(this->toFloat() * copy.toFloat());
	return (res);
}

Fixed	Fixed::operator/(Fixed const &copy) const
{
	//std::cout << "Division arithmetic operator called" << std::endl;
	Fixed	res(this->toFloat() / copy.toFloat());
	return (res);
}

bool	Fixed::operator<(Fixed const &copy) const
{
	//std::cout << "'Less than' comparison operator called" << std::endl;
	return (this->getRawBits() < copy.getRawBits());
}

bool	Fixed::operator>(Fixed const &copy) const
{
	//std::cout << "'Greater than' comparison operator called" << std::endl;
	return (this->getRawBits() > copy.getRawBits());
}

bool	Fixed::operator>=(Fixed const &copy) const
{
	//std::cout << "'Greater than or equal to' comparison operator called" << std::endl;
	return (this->getRawBits() >= copy.getRawBits());
}

bool	Fixed::operator<=(Fixed const &copy) const
{
	//std::cout << "'Less than or equal to' comparison operator called" << std::endl;
	return (this->getRawBits() <= copy.getRawBits());
}

bool	Fixed::operator==(Fixed const &copy) const
{
	//std::cout << "'Equal to' comparison operator called" << std::endl;
	return (this->getRawBits() == copy.getRawBits());
}

bool	Fixed::operator!=(Fixed const &copy) const
{
	//std::cout << "'Not equal to' comparison operator called" << std::endl;
	return (this->getRawBits() != copy.getRawBits());
}

Fixed Fixed::operator++(int)
{
	Fixed res;

	res = *this;
	this->_fixedPoint++;
	return (res);
}

Fixed Fixed::operator--(int)
{
	Fixed res;

	res = *this;
	this->_fixedPoint--;
	return (res);
}

Fixed &Fixed::operator++(void)
{
	this->_fixedPoint++;
	return(*this);
}

Fixed &Fixed::operator--(void)
{
	this->_fixedPoint--;
	return(*this);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return(stream);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);	
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPoint >> _x);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPoint / (1 << _x));
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}