/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:01:04 by lamici            #+#    #+#             */
/*   Updated: 2023/11/22 11:03:13 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#define DB_FNAME "data.csv"

//-----------------------------------------------------

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: wrong arguments." << std::endl;
		return (1);
	}

	try
	{
		BitcoinExchange bce(DB_FNAME);
		
		bce.execute(av[1]);
	}
	catch (std::exception) {}

	return (0);
}
