/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:07:19 by lamici            #+#    #+#             */
/*   Updated: 2023/10/27 13:41:23 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ITER_H
# define ITER_H

# include <iostream>

template <typename Type, typename Len, typename Fun>

void iter(Type *array, Len length, Fun function)
{
	for (int i = 0; i < length; i++)
	{
		function(array[i]);
	}
}

#endif