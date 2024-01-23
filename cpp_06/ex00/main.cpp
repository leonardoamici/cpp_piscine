/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abettini <abettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:09:20 by abettini          #+#    #+#             */
/*   Updated: 2023/10/19 17:21:05 by abettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		 std::cerr << "Wrong arguments." << std::endl;
		 return (1);
	}

	std::string literal(av[1]);
	ScalarConverter a;
	a.convert(literal);

	return (0);
}
