/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:08:19 by lamici            #+#    #+#             */
/*   Updated: 2023/11/08 11:01:51 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <algorithm>
# include <iostream>

class Span
{
	private:
		std::vector<int>	_array;
		unsigned int _maxSize;
		Span(void);
	public:
	Span(unsigned int size);
	~Span(void);
	Span(const Span &copy);
	Span &operator=(const Span &copy);
	void				addNumber(int insert);
	void				addNumber(int insert, int amount);
	void				addRandNumber(int range, int amount);
	unsigned long		shortestSpan(void) const;
	unsigned long		longestSpan(void) const;
};

#endif