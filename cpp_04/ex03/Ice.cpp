/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:20:54 by lamici            #+#    #+#             */
/*   Updated: 2023/10/06 11:39:45 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	this->type = "ice";
}

Ice::Ice(std::string const & type)
{
	this->type = type;
}

Ice::~Ice(void)
{
	;
}

Ice::Ice(const Ice &copy)
{
	*this = copy;
}

Ice	&Ice::operator=(const Ice &copy)
{
	AMateria::operator=(copy);
	return(*this);
}

Ice *Ice::clone() const
{
	Ice *clone;

	clone = new Ice(*this);
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " <<  target.getName()  << " *" << std::endl;
}