/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:11 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 10:28:06 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat standard constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl; 
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy constructor called" << std::endl; 
	*this = copy;
}

void	Cat::makeSound(void) const
{
	std::cout << "*disgusting creature noises*" << std::endl;
}

Cat	&Cat::operator=(Cat const &copy)
{
	Animal::operator=(copy);
	return *this;
}