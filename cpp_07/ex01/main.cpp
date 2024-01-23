/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:07:21 by lamici            #+#    #+#             */
/*   Updated: 2023/10/27 13:41:46 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename Type>
void	plusOne(Type &var)
{
	var = var + 1;
}

int main(void)
{
	int array[] = {7, 8, 9, 123, 4, 7, -3};
	int size = (sizeof(array) / sizeof(int));

	::iter(array, size, plusOne<int>);
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}
