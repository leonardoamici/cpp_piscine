/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:07:59 by lamici            #+#    #+#             */
/*   Updated: 2023/11/08 11:04:08 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	this->_maxSize = 0;
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span(void)
{
	;
}

Span::Span(unsigned int size)
{
	this->_maxSize = size;
}

Span &Span::operator=(const Span &copy)
{
	this->_array = copy._array;
	return (*this);
}

void	Span::addNumber(int insert)
{
	if(_array.size() == this->_maxSize)
		throw (std::exception());
	_array.push_back(insert);
}

void			Span::addNumber(int insert, int amount)
{
	for (int i = 0; i < amount; i++)
		addNumber(insert);
}

void			Span::addRandNumber(int range, int amount)
{
	for (int i = 0; i < amount; i++)
		addNumber(rand() % range);
}

unsigned long		Span::shortestSpan(void) const
{
	std::vector<int>				temp(_array);
	unsigned long					span;

	if (_array.size() < 2)
		throw (std::exception());
	span = (unsigned long)std::abs((long)temp[0] - (long)temp[1]);
	std::sort(temp.begin(), temp.end());
	for (unsigned int  i = 0; i < temp.size() - 1; i++)
		if (span > (unsigned long)std::abs((long)temp[i] - (long)temp[i + 1]))
			span = (unsigned long)std::abs((long)temp[i] - (long)temp[i + 1]);
	return (span);
}

unsigned long		Span::longestSpan(void) const
{
	std::vector<int>	temp(_array);

	if (_array.size() < 2)
		throw (std::exception());
	std::sort(temp.begin(), temp.end());
	return ((unsigned long)std::abs((long)temp[0] - (long)temp[temp.size() - 1]));
}
