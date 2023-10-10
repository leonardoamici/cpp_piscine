/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:20 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 11:02:12 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog standard constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
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
	*brain = *copy.brain;
	return *this;
}