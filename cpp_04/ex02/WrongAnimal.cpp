/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:39 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 10:31:35 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal standard constructor called" << std::endl; 
	this->type = "";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl; 
	*this = copy;
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "wrong sound" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &copy)
{	
	if(this != &copy)
		this->type = copy.type;
	return (*this);
}