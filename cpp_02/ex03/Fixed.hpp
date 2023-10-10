/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:55:16 by lamici            #+#    #+#             */
/*   Updated: 2023/09/22 10:28:46 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	_fixedPoint;
		static const int	 _x = 8;
	public:
		Fixed();
		Fixed(const int x);
		Fixed(const float x);
		Fixed(const Fixed &copy);
		~Fixed();
	Fixed	&operator=(Fixed const &copy);
	Fixed	&operator--(void);
	Fixed	&operator++(void);
	Fixed	operator--(int);
	Fixed	operator++(int);
	bool	operator!=(Fixed const &copy) const;
	bool	operator==(Fixed const &copy) const;
	bool	operator<=(Fixed const &copy) const;
	bool	operator>=(Fixed const &copy) const;
	bool	operator>(Fixed const &copy) const;
	bool	operator<(Fixed const &copy) const;
	Fixed	operator/(Fixed const &copy) const;
	Fixed	operator*(Fixed const &copy) const;
	Fixed	operator-(Fixed const &copy) const;
	Fixed	operator+(Fixed const &copy) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

#endif