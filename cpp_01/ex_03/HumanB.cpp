/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:42:01 by lamici            #+#    #+#             */
/*   Updated: 2023/09/13 15:06:11 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->wp = NULL;
}

HumanB::~HumanB(void)
{
	;
}

void	HumanB::setWeapon(Weapon *wp)
{
	this->wp = wp;
}

void	HumanB::attack(void)
{
	if(this->wp)
		std::cout << this->name << " attacks with their " << this->wp->getType()  << std::endl;
	else
		std::cout << this->name << " is unarmed" << std::endl;
}
