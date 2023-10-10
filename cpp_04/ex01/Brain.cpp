/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:37:49 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 11:06:49 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain standard constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = "idea";
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl; 
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl; 
	*this = copy;
}

Brain	&Brain::operator=(Brain const &copy)
{
	if(this != &copy)
		*this = copy;
	return (*this);
}