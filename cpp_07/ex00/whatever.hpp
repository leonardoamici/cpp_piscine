/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:52:07 by lamici            #+#    #+#             */
/*   Updated: 2023/10/25 11:01:22 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template <typename A>

void swap(A &first, A &second)
{
	A temp;

	temp = first;
	first = second;
	second = temp;
}

template <typename A>

const A &min(const A &first, const A &second)
{
	return (first < second ? first : second);
}

template <typename A>

const A &max(const A &first, const A &second)
{
	return (first > second ? first : second);
}

#endif