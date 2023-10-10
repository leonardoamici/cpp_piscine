/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:31:28 by lamici            #+#    #+#             */
/*   Updated: 2023/09/22 11:00:08 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	//std::cout << "Default constructor called" << std::endl;
	;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	//std::cout << "Default constructor called" << std::endl;
	;
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{
	//td::cout << "Copy constructor called" << std::endl;
	;
}

Point	&Point::operator=(Point const &copy)
{
	if(this != &copy)
		;
	return(*this);
}

Point::~Point(void)
{
	;
}

const Fixed	Point::getX(void) const
{
	return(this->_x);
}

const Fixed	Point::getY(void) const
{
	return(this->_y);
}