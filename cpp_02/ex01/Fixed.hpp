/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:55:16 by lamici            #+#    #+#             */
/*   Updated: 2023/09/21 14:44:29 by lamici           ###   ########.fr       */
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
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

#endif