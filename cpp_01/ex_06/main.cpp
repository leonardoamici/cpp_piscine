/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:35:30 by lamici            #+#    #+#             */
/*   Updated: 2023/09/14 15:17:14 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if(ac > 2)
		std::cerr << "Error: too many arguments" << std::endl;
	else if(ac == 2)
		harl.complain(av[1]);
	else
		harl.complain("");

	return (0);
}