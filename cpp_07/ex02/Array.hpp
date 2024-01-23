/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:48:23 by lamici            #+#    #+#             */
/*   Updated: 2023/10/30 10:04:25 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ARRAY_H
# define ARRAY_H

# include <stdexcept>

template <typename T>

class 	Array
{
	private:
		T	*_Array;
		unsigned int	_size;
		
	public:
			Array(void);
			~Array(void);
			Array(unsigned int num);
			Array(const Array &copy);
	Array 	&operator=(const Array &copy);
	T 		&operator[](int index);
	const unsigned int &size(void) const;
};

# include "Array.tpp"

#endif