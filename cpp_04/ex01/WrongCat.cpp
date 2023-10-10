/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:45 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 10:34:23 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat standard constructor called" << std::endl; 
	this->type = "";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl; 
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl; 
	*this = copy;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "other sound" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &copy)
{	
	if(this != &copy)
		this->type = copy.type;
	return (*this);
}