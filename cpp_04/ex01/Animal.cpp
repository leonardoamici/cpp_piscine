/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:08 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 10:26:48 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal standard constructor called" << std::endl; 
	this->type = "";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl; 
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl; 
	*this = copy;
}

std::string Animal::getType(void) const
{
	return(this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "muffled sounds of claudo violence" << std::endl;
}

Animal	&Animal::operator=(Animal const &copy)
{	
	if(this != &copy)
		this->type = copy.type;
	return (*this);
}
