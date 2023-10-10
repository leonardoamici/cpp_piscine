/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:20:44 by lamici            #+#    #+#             */
/*   Updated: 2023/10/06 11:22:54 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	this->type = "cure";
}

Cure::Cure(std::string const & type)
{
	this->type = type;
}

Cure::~Cure(void)
{
	;
}

Cure::Cure(const Cure &copy)
{
	*this = copy;
}

Cure	&Cure::operator=(const Cure &copy)
{
	AMateria::operator=(copy);
	return(*this);
}

Cure *Cure::clone() const
{
	Cure *clone;

	clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " <<  target.getName()  << "’s wounds *" << std::endl;
}
