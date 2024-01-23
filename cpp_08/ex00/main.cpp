/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:25:53 by lamici            #+#    #+#             */
/*   Updated: 2023/11/07 10:49:02 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main(void)
{
	std::vector<int>	sp(10 ,9);

	sp.push_back(6);
	sp.push_back(3);
	sp.push_back(17);
	sp.push_back(9);
	sp.push_back(11);
	std::cout << easyfind(sp, 17) << std::endl;
	return (0);
}