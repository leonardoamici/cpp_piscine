/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:22:13 by lamici            #+#    #+#             */
/*   Updated: 2023/09/18 09:56:33 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int	main(void)
{
	std::string string;
	phonebook contacts;

	while(1)
	{
		std::cout << "choose one of the following: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, string);
		if(string == "ADD")
			contacts.add();
		else if(string == "SEARCH")
			contacts.search();
		else if(string == "EXIT")
			break ;
		else
			std::cout << "Error" << std::endl;
		if(std::cin.eof())
			break ;
	}
}