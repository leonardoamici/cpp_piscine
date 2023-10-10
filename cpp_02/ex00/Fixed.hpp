/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:55:16 by lamici            #+#    #+#             */
/*   Updated: 2023/09/21 09:41:47 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	private:
		int	_fixedPoint;
		static const int	 _x = 8;
	public:
		Fixed();
		Fixed(Fixed &x);
		~Fixed();
	Fixed	&operator=(Fixed const &copy);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif