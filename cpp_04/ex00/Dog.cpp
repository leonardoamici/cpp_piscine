/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:20 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 10:28:37 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog standard constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl; 
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::endl; 
	*this = copy;
}

void	Dog::makeSound(void) const
{
	std::cout << "*woof woof noises*" << std::endl;
}

Dog	&Dog::operator=(Dog const &copy)
{
	Animal::operator=(copy);
	return *this;
}