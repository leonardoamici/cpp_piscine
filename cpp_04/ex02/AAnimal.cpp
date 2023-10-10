/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:08 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 11:12:11 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal standard constructor called" << std::endl; 
	this->type = "";
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl; 
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "AAnimal copy constructor called" << std::endl; 
	*this = copy;
}

std::string AAnimal::getType(void) const
{
	return(this->type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "muffled sounds of claudo violence" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &copy)
{	
	if(this != &copy)
		this->type = copy.type;
	return (*this);
}
