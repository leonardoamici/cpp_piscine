/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:06:56 by lamici            #+#    #+#             */
/*   Updated: 2023/10/23 11:05:41 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	ptr;
	uintptr_t value = Serializer::serialize(&ptr);
	
	std::cout << &ptr << std::endl;
	std::cout << value << std::endl;
	
	data	*otherptr = Serializer::deserialize(value);
	
	std::cout << otherptr << std::endl;
	std::cout << otherptr->value << std::endl;

	return (0);
}