/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:32:05 by lamici            #+#    #+#             */
/*   Updated: 2023/09/22 11:01:32 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef POINT_H
# define POINT_H
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		const Fixed	getX(void) const;
		const Fixed	getY(void) const;
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		~Point();
	Point	&operator=(Point const &copy);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif