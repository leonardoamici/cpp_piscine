/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:20:33 by lamici            #+#    #+#             */
/*   Updated: 2023/10/06 10:17:18 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp" 

AMateria::AMateria(void)
{
	;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria(void)
{
	;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	if(this != &copy && type == copy.type)
		this->type = copy.type;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return(this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "idk man on " <<  target.getName() << std::endl;
}